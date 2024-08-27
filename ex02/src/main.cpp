/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:38:39 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/27 15:59:52 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal* a = new Animal();

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " makes sound: ";
	dog->makeSound();

	std::cout << cat->getType() << " makes sound: ";
	cat->makeSound();

	delete dog;
	delete cat;

	return 0;
}