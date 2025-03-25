/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:57:17 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/10 15:34:58 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/colors.hpp"
#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << C_TEAL "Brain default constructor called!" C_RESET << std::endl;
	for(int i = 0; i < 100; i++)
		this->setIdeas(i, "Who am I?");
}

Brain::~Brain()
{
	std::cout << C_ROSE_RED "Brain default destructor called!" C_RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << C_TEAL "Brain copy constructor called!" C_RESET << std::endl;
	for(int i = 0; i <= 100; i++)
		this->setIdeas(i, other.ideas[i]);
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << C_TEAL "Brain copy assignement called!" C_RESET << std::endl;
	if(this != &other)
	{
		for(int i = 0; i <= 100; i++)
			this->setIdeas(i, other.ideas[i]);
	}
	return (*this);
}

std::string Brain::getIdeas(int idx) const
{
	if(idx >= 0 && idx <= 100)
		return(this->ideas[idx]);
	return(NULL);
}

void Brain::setIdeas(int idx, const std::string& idea)
{
	if (idx >= 0 && idx < 100)
		this->ideas[idx] = idea;
}