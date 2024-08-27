/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:17:54 by okrahl            #+#    #+#             */
/*   Updated: 2024/08/27 14:51:46 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain
{
	private:

		std::string	_ideas[100];

	public:

		Brain();
		Brain(std::string ideas[100]);
		~Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);

		std::string getIdea(int i)const;
		void setIdea(int i, const std::string &idea);
};
