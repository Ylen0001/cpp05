/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:57:04 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/24 15:07:37 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"
#include "ASpell.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
    std::cout << "Fwoosh's constructor called!" << std::endl;
}

Fwoosh::~Fwoosh()
{
    std::cout << "Fwoosh's destructor called!" << std::endl;
}

ASpell* Fwoosh::clone() const
{
    return (new Fwoosh());
}
