/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:22:43 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/26 16:41:00 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"

Animal::Animal()
{
	std::cout << "An animal was born" << std::endl;
	_type = "Animal";
}

Animal::Animal(const std::string &Type)
{
	std::cout << "An animal was born" << std::endl;
	_type = Type;
}

Animal::~Animal()
{
	std::cout << "An animal died :(" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
		_type = copy._type;
	return *this;
}

void Animal::makeSound()const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType()const
{
	return _type;
}
