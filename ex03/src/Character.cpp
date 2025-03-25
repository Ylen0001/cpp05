/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:53:39 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 13:36:40 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/AMateria.hpp"

Character::Character() : name("default")
{
	// std::cout << "Character default constructor called!" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(std::string name) : name(name)
{
	// std::cout << "Character " << name << " default constructor called!" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete this->inventory[i];
	// std::cout << "Character " << this->name << " destructor called!" << std::endl;
	
}

Character::Character(const Character& other)
{
	// std::cout << "Character copy constructor called!" << std::endl;
	this->name = other.name;
	for(int i = 0; i < 4; i++)
	{
		if(other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character& Character::operator=(const Character& other)
{
	if(this != &other)
	{
		this->name = other.name;
		for(int i = 0; i < 4; i++)
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
		for(int i = 0; i < 4; i++)
		{
			if(other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return(this->name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) 
{
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}

void Character::displayInventory()
{
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i] != NULL)
			std::cout << this->inventory[i] << std::endl;
	}
}