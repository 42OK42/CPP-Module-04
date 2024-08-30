/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:38:39 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/30 14:48:18 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();
	
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!

	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();

	animal->makeSound();
	wronganimal->makeSound();

	wrongcat->makeSound();

	delete animal;
	delete dog;
	delete cat;
	delete wronganimal;
	delete wrongcat;

	return 0;
}