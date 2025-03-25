/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:19:25 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 15:14:25 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : type("Default type")
{
	std::cout << C_SOFT_ORANGE "Animal default constructor called!" C_RESET << std::endl;
}

Animal::Animal(std::string type)
{
	this->set_Type(type);
	std::cout << C_SOFT_ORANGE "[Animal] " << this->get_Type() << " constructor called!" C_RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << C_SOFT_ORANGE "Animal destructor called!" C_RESET << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Animal& Animal)
{
	out << Animal.get_Type() << std::endl;
	return (out);
}

std::string Animal::get_Type() const
{
	return(this->type);
}

void Animal::set_Type(const std::string type)
{
	this->type = type;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	this->type = other.type;
	return(*this);
}

// void Animal::makeSound() const
// {
// 	std::cout << "Grrr!" << std::endl;
// }