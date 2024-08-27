/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:38:39 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/27 14:44:11 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	const int numAnimals = 10;
	Animal* animals[numAnimals];
	
	for (int k = 0; k < numAnimals / 2; ++k)
	{
		animals[k] = new Dog();
	}
	
	for (int k = numAnimals / 2; k < numAnimals; ++k)
	{
		animals[k] = new Cat();
	}

	Dog originalDog;
	Dog copiedDog = originalDog;

	Cat originalCat;
	Cat copiedCat = originalCat;

	for (int k = 0; k < numAnimals; ++k)
	{
		delete animals[k];
	}

	return 0;
}