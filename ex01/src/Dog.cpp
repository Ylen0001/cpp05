/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:19:25 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/10 16:25:25 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << C_PASTEL_BLUE "Dog default constructor called!" C_RESET << std::endl;
	Brain *tmp = new Brain;
	this->ideas = tmp; 
}

Dog::~Dog()
{
	delete this->ideas;
	std::cout << C_DUSTY_RED "Dog destructor called!" C_RESET << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << C_PASTEL_BLUE << this->get_Type() << " constructor called!" << C_RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << C_PASTEL_BLUE "Dog copy constructor called!" C_RESET << std::endl;
	this->type = other.type;
	this->ideas = new Brain(*other.ideas); // Deep copy
}

std::ostream& operator<<(std::ostream& out, const Dog& Dog)
{
	out << Dog.get_Type() << std::endl;
	return (out);
}

std::string Dog::get_Type() const
{
	return(this->type);
}

void Dog::set_Type(const std::string type)
{
	this->type = type;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment called!" << std::endl;
	if(this != &other)
	{
		this->type = other.type;
		delete this->ideas;
		// this->ideas = other.ideas; // Shallow copy
		this->ideas = new Brain(*other.ideas);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << C_PASTEL_BLUE "Woof!" C_RESET << std::endl;
}

void Dog::setIdeas(int idx, std::string idea)
{
	if(ideas)
		this->setIdeas(idx, idea);
}

// std::string Dog::getIdea(int idx) const
// {
// 	if(idx >= 0 && idx <= 100)
// 		return this->ideas->getIdeas(idx);
// 	return(NULL);
// }

Brain* Dog::getBrain() const {
    return this->ideas;
}