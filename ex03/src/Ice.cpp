/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:35:42 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 13:12:04 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice default constructor called!" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called!" << std::endl;
}

Ice::Ice(const Ice& other)
{
	// std::cout << "Ice copy constructor called!" << std::endl;
	this->type = other.type;
}

Ice& Ice::operator=(const Ice& other)
{
	if(this != &other)
		this->type = other.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return new Ice(*this); // Deep copy
}

void Ice::use(ICharacter& target)
{
	std::cout << "* Shoots an ice bolt at " << target.getName() << " *" << std::endl;
}