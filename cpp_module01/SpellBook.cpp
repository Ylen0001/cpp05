/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:06:53 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 16:16:26 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

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