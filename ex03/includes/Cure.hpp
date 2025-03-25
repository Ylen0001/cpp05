/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:05:02 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/11 17:40:15 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "Character.hpp"

class AMateria;

class Cure : public AMateria
{
	private :

	std::string type;

	public :
	
	Cure();
	~Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& other); 
	void use(ICharacter& target);
	AMateria* clone() const;
};

#endif