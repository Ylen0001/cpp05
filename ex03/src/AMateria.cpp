/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:15:56 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 13:00:38 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
	// std::cout << "Amateria default constructor called!" << std::endl;
	this->type = "default";
}

AMateria::AMateria(std::string const& type)
{
	// std::cout << "Amateria constructor called!" << std::endl;
	this->type = type;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called!" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	// std::cout << "AMateria copy constructor called!" << std::endl;
	this->type = other.type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if(this != &other)
		this->type = other.type;
	return (*this);
}

std::string const& AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* Uses an unknown materia on " << target.getName() << " *" << std::endl;
}

