/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:37:20 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 14:40:42 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define MateriaSource MateriaSource
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

class AMateria;

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource default constructor called!" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	// for(int i = 0; i < 4; i++)
	// 	delete this->inventory[i];
	// std::cout << "MateriaSource default destructor called!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	// std::cout << "MateriaSource copy constructor called!" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if(this != &other)
	{
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

void MateriaSource::learnMateria(AMateria* m)
{
	if(!m)
	{
		std::cout << "This is no Materia to learn!" << std::endl;
		return;
	}
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i] == NULL)
		{
			/* On stocke le pointeur sur la Materia, pour la cloner plus tard
			dans createMateria. Notre inventaire est juste une liste
			de recette au final. */
			this->inventory[i] = m; 
			return;
		}
	}
	std::cout << "MateriaSource is full!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->inventory[i]->getType() == type)
			return this->inventory[i]->clone();
	}
	std::cout << "Unknown Materia type: " << type << "." << std::endl;
	return (0);
}