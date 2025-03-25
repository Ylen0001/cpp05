/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:30:56 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 11:51:41 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
// class IMateriaSource;

class MateriaSource : public IMateriaSource
{
	private :

	AMateria* inventory[4];

	public:
	
	MateriaSource();
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource& other);
	MateriaSource(const MateriaSource& other);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const& type);
};

#endif