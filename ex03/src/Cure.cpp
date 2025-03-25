/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:59:25 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 13:01:05 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure default constructor called!" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called!" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	// std::cout << "Cure copy constructor called!" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	if(this != &other)
	this->type = other.type;
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure(*this); // Deep copy
}

void Cure::use(ICharacter& target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
}