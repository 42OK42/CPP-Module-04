/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:22:43 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/27 15:29:53 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain())
{
	std::cout << "A cat was born" << std::endl;
	_type = "Cat";
	for (int i = 0; i < 100; i++)
		_brain->setIdea(i, "Let's bite my owner!");
}

Cat::Cat(const std::string &Type) : Animal(Type), _brain(new Brain())
{
	std::cout << "A cat was born" << std::endl;
	_type = Type;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat died!" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miau!" << std::endl;
}

std::string Cat::getType() const
{
	return _type;
}
