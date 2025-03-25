/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:16:53 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/10 16:13:43 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "colors.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{	
	private:

	Brain* ideas; 
	
	public :

	Dog();
	~Dog();
	Dog(std::string type);
	Dog(const Dog& other);
	std::string get_Type() const;
	void set_Type(const std::string type);
	Dog& operator=(const Dog& other);
	void makeSound() const;
	void setIdeas(int idx, std::string idea);
	// std::string getIdea(int idx) const;
	Brain* getBrain() const;
};

std::ostream& operator<<(std::ostream& out, const Dog& Dog);


#endif