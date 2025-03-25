/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:19:25 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/10 14:31:51 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << C_PASTEL_PURPLE "Cat default constructor called!" C_RESET << std::endl;
	Brain *tmp = new Brain;
	this->ideas = tmp;
}

Cat::~Cat()
{
	std::cout << C_DEEP_RED "Cat destructor called!" C_RESET << std::endl;
	delete this->ideas;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << C_PASTEL_PURPLE << this->get_Type() << " constructor called!" << C_RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->type = other.type;
	this->ideas = new Brain(*other.ideas); // Deep copy
}

std::ostream& operator<<(std::ostream& out, const Cat& Cat)
{
	out << Cat.get_Type() << std::endl;
	return (out);
}

std::string Cat::get_Type() const
{
	return(this->type);
}

void Cat::set_Type(const std::string type)
{
	this->type = type;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignement called!" << std::endl;
	if(this != &other)
	{
		this->type = other.type;
		// this->ideas = other.ideas; // Shallow copy
		this->ideas = new Brain(*other.ideas); // Deep Copy;
	}
	
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << C_PASTEL_PURPLE "Meow!" C_RESET << std::endl;
}

void Cat::setIdeas(int idx, std::string idea)
{
	if(ideas)
		this->setIdeas(idx, idea);
}