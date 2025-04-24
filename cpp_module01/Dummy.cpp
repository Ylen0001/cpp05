/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:12:22 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/24 15:14:34 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
    std::cout << "Dummy's constructor called!" << std::endl;
}

Dummy::~Dummy()
{
    std::cout << "Dummy's destructor called!" << std::endl;
}

ATarget* Dummy::clone() const
{
    return (new Dummy());
}