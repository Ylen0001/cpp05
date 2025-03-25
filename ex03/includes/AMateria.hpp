/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:51:48 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 10:20:16 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria // Classe abstraite basique.
{
	protected : 

	std::string type;
	
	public : 
	
	AMateria();
	AMateria(std::string const& type);
	virtual ~AMateria();
	AMateria(const AMateria& other);
	AMateria& operator=(const AMateria& other);
	std::string const& getType() const; // Returns the materia type
	
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	
};

#endif