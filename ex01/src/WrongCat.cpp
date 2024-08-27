/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:22:43 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/26 16:50:00 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "A wrong_cat was born" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const std::string &Type)
{
	std::cout << "A wrong_cat was born" << std::endl;
	_type = Type;
}

WrongCat::~WrongCat()
{
	std::cout << "A wrong_cat died" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
		_type = copy._type;
	return *this;
}

void WrongCat::makeSound()const
{
	std::cout << "WrongCat sound" << std::endl;
}

std::string WrongCat::getType()const
{
	return _type;
}