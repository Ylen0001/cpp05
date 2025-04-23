/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:40:11 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/23 17:02:02 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << getName() << ": This looks like another boring day." << std::endl; 
}

Warlock::~Warlock()
{
	std::cout << getName() << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock& other)
{
	std::cout << "Copy constructor called!" << std::endl;
	this->_name = other.getName();
	this->_title = other.getTitle();
}

Warlock& Warlock::operator=(const Warlock& other)
{
	std::cout << "Copy assignement called!" << std::endl;
	if(this != &other)
	{
		this->_name = other.getName();
		this->_title = other.getTitle();
	}
	return (*this);
}

void Warlock::introduce() const
{
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

std::string Warlock::getName() const
{
	return (this->_name);
}

std::string Warlock::getTitle() const
{
	return (this->_title);
}

void Warlock::setTitle(const std::string& title)
{
	this->_title = title;
}

