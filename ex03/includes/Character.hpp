/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:50:09 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 13:20:18 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;
// class ICharacter;

class Character : public ICharacter
{
	private:
	
	std::string name;
	AMateria* inventory[4];
	
	public :
	
	Character();
	Character(std::string name);
	~Character();
	Character(const Character& other);
	Character& operator=(const Character& other);
	std::string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void displayInventory();
};

#endif