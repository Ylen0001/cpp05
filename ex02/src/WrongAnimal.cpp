/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:45:02 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/06 14:48:29 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default type")
{
	std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->set_Type(type);
	std::cout << this->get_Type() << " constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const WrongAnimal& WrongAnimal)
{
	out << WrongAnimal.get_Type() << std::endl;
	return (out);
}

std::string WrongAnimal::get_Type() const
{
	return(this->type);
}

void WrongAnimal::set_Type(const std::string type)
{
	this->type = type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	this->type = other.type;
	return(*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Grrr!" << std::endl;
}