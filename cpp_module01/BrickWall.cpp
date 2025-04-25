/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:12:22 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 15:39:39 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{
    // std::cout << "BrickWall's constructor called!" << std::endl;
}

BrickWall::~BrickWall()
{
    // std::cout << "BrickWall's destructor called!" << std::endl;
}

ATarget* BrickWall::clone() const
{
    return (new BrickWall());
}