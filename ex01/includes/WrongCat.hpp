/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:39:40 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/06 14:46:09 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :

	WrongCat();
	~WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat& other); 
	std::string get_Type() const;
	void set_Type(const std::string type);
	WrongCat& operator=(const WrongCat& other);
	void makeSound() const;
};

#endif