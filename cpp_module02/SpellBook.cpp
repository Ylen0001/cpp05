/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:06:53 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 16:31:12 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "Fwoosh.hpp"

SpellBook::SpellBook()
{
	for(int i = 0; i < 4; i++)
	{
		this->book[i] = NULL;
	}
}

SpellBook::~SpellBook()
{
	for(int i = 0; i < 4; i++)
	{
		delete this->book[i];
	}
}

SpellBook::SpellBook(const SpellBook& other)
{
	for(int i = 0; i < 4; i++)
	{
		if(other.book[i] != NULL)
		{
			this->book[i] = other.book[i];
		}
	}
}

SpellBook& SpellBook::operator=(const SpellBook& other)
{
	for(int i = 0; i < 4; i++)
	{
		if(other.book[i] != NULL)
		{
			this->book[i] = other.book[i];
		}
	}
	return (*this);
}

void SpellBook::learnSpell(ASpell* spell)
{
	int i = 0;
	while(this->book[i])
	{
		if(this->book[i] == NULL)
		{
			this->book[i] = spell->clone();
			break;
		}
		i++;
	}
}

void SpellBook::forgetSpell(const std::string& spellname)
{
	int i = 0;
	while(this->book[i] && i < 4)
	{
		if(this->book[i]->getName() == spellname)
		{
			delete this->book[i];
			this->book[i] = NULL;
			return;
		}
		i++;
	}
}


ASpell* SpellBook::createSpell(const std::string& spellName)
{
	int i = 0;
	while(this->book[i] && i < 4)
	{
		if(this->book[i] == NULL)
		{
			if(spellName == "Fireball" )
				return new Fireball;
			else if(spellName == "Polymorph")
				return new Polymorph;
			else if(spellName == "Fwoosh")
				return new Fwoosh;
		}
		i++;
	}
	return NULL;
}