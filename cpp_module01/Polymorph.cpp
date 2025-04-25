/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball copy.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:57:04 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 15:37:05 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"
#include "ASpell.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{
    // std::cout << "Polymorph's constructor called!" << std::endl;
}

Polymorph::~Polymorph()
{
    // std::cout << "Polymorph's destructor called!" << std::endl;
}

ASpell* Polymorph::clone() const
{
    return (new Polymorph());
}
