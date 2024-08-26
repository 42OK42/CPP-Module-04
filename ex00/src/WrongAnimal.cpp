/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:22:43 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/26 17:25:05 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A wrong_animal was born" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const std::string &Type)
{
	std::cout << "A wrong_animal was born" << std::endl;
	_type = Type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A wrong_animal died :(" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
		_type = copy._type;
	return *this;
}

void WrongAnimal::makeSound()const
{
	std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType()const
{
	return _type;
}