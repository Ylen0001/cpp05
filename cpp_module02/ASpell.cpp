/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:13:32 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 14:57:15 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects)
{
	// std::cout << "ASpell's constructor called!" << std::endl;
}

ASpell::~ASpell()
{
	// std::cout << "ASpell's destructor called!" << std::endl;
}

ASpell::ASpell(const ASpell& other)
{
	// std::cout << "ASpell's copy constructor's called!" << std::endl;
	this->name = other.getName();
	this->effects = other.getEffects();	
}

ASpell& ASpell::operator=(const ASpell& other)
{
	// std::cout << "ASpell's copy assignement's called!" << std::endl;
	if(this != &other)
	{
		this->name = other.getName();
		this->effects = other.getEffects();
	}
	return(*this);
}

std::string ASpell::getName() const
{
	return this->name;	
}

std::string ASpell::getEffects() const
{
	return this->effects;
}

void ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}
