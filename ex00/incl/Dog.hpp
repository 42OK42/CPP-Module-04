/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:15:52 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/26 17:37:28 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
	
		Dog();
		Dog(const std::string &Type);
		~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);

		void makeSound()const;
		std::string getType()const;

	protected:

		std::string	_type;
};
