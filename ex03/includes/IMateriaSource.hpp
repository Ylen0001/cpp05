/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:32:34 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/12 10:34:24 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP
#define IMATERIA_SOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:

	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const& type) = 0;
};


#endif