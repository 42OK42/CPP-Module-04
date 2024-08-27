/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:22:43 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/27 15:27:20 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	std::cout << "A dog was born" << std::endl;
	_type = "Dog";
	for (int i = 0; i < 100; i++)
		_brain->setIdea(i, "Brilliant dog idea!");
}

Dog::Dog(const std::string &Type) : Animal(Type), _brain(new Brain())
{
	std::cout << "A dog was born" << std::endl;
	_type = Type;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog died :(" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "WUFF!" << std::endl;
}

std::string Dog::getType() const
{
	return _type;
}