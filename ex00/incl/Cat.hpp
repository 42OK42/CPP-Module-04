/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:15:52 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/26 17:09:35 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	protected:

		std::string	_type;
	
	public:
	
		Cat();
		Cat(const std::string &Type);
		~Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);

		void makeSound()const;
		std::string getType()const;
};
