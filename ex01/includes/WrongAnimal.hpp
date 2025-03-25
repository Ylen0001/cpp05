/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:40:29 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/06 14:42:24 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:

	std::string type;
	
	public :

	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(std::string type);
	std::string get_Type() const;
	void set_Type(const std::string type);
	WrongAnimal& operator=(const WrongAnimal& other);
	void makeSound() const;
};

#endif