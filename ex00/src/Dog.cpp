/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:22:43 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/26 17:43:49 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "A dog was born" << std::endl;
	_type = "Dog";
}

Dog::Dog(const std::string &Type) : Animal(Type)
{
	std::cout << "A dog was born" << std::endl;
	_type = Type;
}

Dog::~Dog()
{
	std::cout << "Dog died :(" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		this->_type = copy.getType();
	return *this;
}

void Dog::makeSound()const
{
	std::cout << "WUFF!" << std::endl;
}

std::string Dog::getType()const
{
	return _type;
}
