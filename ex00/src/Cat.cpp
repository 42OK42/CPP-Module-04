/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:22:43 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/26 17:12:48 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"

Cat::Cat()
{
	std::cout << "A cat was born" << std::endl;
	_type = "Cat";
}

Cat::Cat(const std::string &Type)
{
	std::cout << "A cat was born" << std::endl;
	_type = Type;
}

Cat::~Cat()
{
	std::cout << "Cat died :(" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
		_type = copy._type;
	return *this;
}

void Cat::makeSound()const
{
	std::cout << "Miau!" << std::endl;
}

std::string Cat::getType()const
{
	return _type;
}
