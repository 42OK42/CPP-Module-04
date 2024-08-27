/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:15:52 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/27 14:22:39 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	protected:

		std::string	_type;
		Brain		*_brain;

	public:
	
		Dog();
		Dog(const std::string &Type);
		~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);

		void makeSound()const;
		std::string getType()const;

};
