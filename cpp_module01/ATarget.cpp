/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:30:49 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/24 14:47:58 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string type) : type(type)
{
    std::cout << "ATarget's constructor called!" << std::endl;
}

ATarget::~ATarget()
{
    std::cout << "ATarget destructor called!" << std::endl;
}

ATarget& ATarget::operator=(const ATarget& other)
{
    std::cout << "ATarget copy assignement called!" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

ATarget::ATarget(const ATarget& other)
{
    std::cout << "ATarget copy constructor called!" << std::endl;
    this->type = other.type;
}

std::string ATarget::getType() const
{
    return(this->type);
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
