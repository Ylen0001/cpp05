/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:45:18 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/06 14:47:18 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << this->get_Type() << " constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called!" << std::endl;
	this->type = other.type;
}

std::ostream& operator<<(std::ostream& out, const WrongCat& WrongCat)
{
	out << WrongCat.get_Type() << std::endl;
	return (out);
}

std::string WrongCat::get_Type() const
{
	return(this->type);
}

void WrongCat::set_Type(const std::string type)
{
	this->type = type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copy assignement called!" << std::endl;
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}