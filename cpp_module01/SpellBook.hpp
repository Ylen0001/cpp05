/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:57:26 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 16:06:46 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"

class SpellBook
{
	private:
		ASpell* book[4];
		SpellBook(const SpellBook& other);
		SpellBook& operator=(const SpellBook& other);
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(const std::string& spellname);
		ASpell* createSpell(const std::string& spellname);
};

#endif