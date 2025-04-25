/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:40:11 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 17:23:40 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title), _book()
{
	std::cout << getName() << ": This looks like another boring day." << std::endl; 
	for(int i = 0; i < 4; i++)
	{
		this->_book.book[i] = NULL;
	}
}

Warlock::~Warlock()
{
	std::cout << getName() << ": My job here is done!" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		// if(this->_spellBook[i] != nullptr)
		delete this->_book.book[i];
	}
}

Warlock::Warlock(const Warlock& other)
{
	std::cout << "Copy constructor called!" << std::endl;
	this->_name = other.getName();
	this->_title = other.getTitle();
}

Warlock& Warlock::operator=(const Warlock& other)
{
	std::cout << "Copy assignement called!" << std::endl;
	if(this != &other)
	{
		this->_name = other.getName();
		this->_title = other.getTitle();
	}
	return (*this);
}

void Warlock::introduce() const
{
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

std::string Warlock::getName() const
{
	return (this->_name);
}

std::string Warlock::getTitle() const
{
	return (this->_title);
}

void Warlock::setTitle(const std::string& title)
{
	this->_title = title;
}

void Warlock::learnSpell(ASpell* spell)
{
	int i = 0;

	while(i < 4)
	{
		if(this->_book.book[i] == NULL)
		{
			delete this->_book.book[i];
			this->_book.book[i] = spell->clone();
			return;
		}
		i++;
	}
}

void Warlock::forgetSpell(std::string spellName)
{
	int i = 0;
	while(this->_book.book[i])
	{
		if(this->_book.book[i]->getName() == spellName)
		{
			delete this->_book.book[i];
			this->_book.book[i] = NULL;
			// std::cout << this->getName() << " successfully forgot " << spellName << " spell!" << std::endl;
			return;
		}
		i++;
	}
	return;
}

void Warlock::launchSpell(std::string spellName, ATarget& target)
{
	// (void)target;
	int i = 0;
	while(this->_book.book[i] && i < 4)
	{
		if(this->_book.book[i]->getName() == spellName)
		{
			this->_book.book[i]->launch(target);
			break;
		}
		i++;
	}
	return;
}