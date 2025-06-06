/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:16:53 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/11 12:10:54 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "colors.hpp"
#include <iostream>

class Animal
{
	protected:

	std::string type;
	
	public :

	Animal();
	virtual ~Animal();
	Animal(std::string type);
	std::string get_Type() const;
	void set_Type(const std::string type);
	Animal& operator=(const Animal& other);
	virtual void makeSound() const = 0;
};

std::ostream& operator<<(std::ostream& out, const Animal& Animal);


#endif