/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:29:36 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 16:30:47 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		ASpell* _spellBook[4];
		SpellBook _book;
		
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		Warlock(const Warlock& other);
		Warlock& operator=(const Warlock& other);

		std::string getName() const;
		std::string getTitle() const;
		void	setTitle(const std::string& title);
		void introduce() const;

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget& target);
};

#endif