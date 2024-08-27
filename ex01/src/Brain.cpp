/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:17:57 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/27 15:24:32 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
	for (int i = 0; i < 100; ++i)
		_ideas[i] = "Default idea";
}

Brain::~Brain()
{
	std::cout << "Brain was destroyed" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		_ideas[i] = copy._ideas[i];
}	

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; ++i)
			_ideas[i] = copy._ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int i)const
{
	return _ideas[i];
}

void Brain::setIdea(int i, const std::string &idea)
{
	_ideas[i] = idea;
}