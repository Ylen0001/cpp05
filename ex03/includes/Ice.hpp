/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:00:57 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 10:18:49 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Character.hpp"
#include "AMateria.hpp"

// class AMateria;

class Ice : public AMateria
{
	private :

	std::string type;

	public :
	
	Ice();
	~Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	void use(ICharacter& target);
	AMateria* clone() const;
};

#endif