/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:57:04 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 15:36:48 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"
#include "ASpell.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{
    // std::cout << "Fireball's constructor called!" << std::endl;
}

Fireball::~Fireball()
{
    // std::cout << "Fireball's destructor called!" << std::endl;
}

ASpell* Fireball::clone() const
{
    return (new Fireball());
}
