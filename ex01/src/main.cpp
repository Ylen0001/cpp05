/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:06:13 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/10 16:09:03 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/colors.hpp"
#include <iostream>	

int main(void)
{
	int size = 4;
	Animal* animals[size];
	std::cout << "***** Construction time! *****\n\n" << std::endl;
	for(int i = 0; i < size; i++)
	{
		if(i < size / 2)
		{
			animals[i] = new Dog;
			std::cout << C_PASTEL_BLUE << animals[i]->get_Type() << C_RESET << std::endl;
			animals[i]->makeSound();
		}
		if(i >= size / 2)
		{
			animals[i] = new Cat;
			std::cout << C_PASTEL_PURPLE << animals[i]->get_Type() << C_RESET << std::endl;
			animals[i]->makeSound();
		}
	}

	std::cout << "\n\n***** Deep Copy Test *****\n\n" << std::endl;

	Dog basic;
	{
		Dog tmp = basic;
	
		// Vérification des adresses des Brain
		std::cout << "Address of basic's Brain: " << basic.getBrain() << std::endl;
		std::cout << "Address of tmp's Brain: " << tmp.getBrain() << std::endl;
	
		if (basic.getBrain() == tmp.getBrain()) {
			std::cout << C_RED "❌ Shallow copy detected! (Same Brain)" C_RESET << std::endl;
		} else {
			std::cout << C_MINT_GREEN "✅ Deep copy successful! (Different Brain)" C_RESET << std::endl;
		}
	}

	std::cout << "\n\n***** Destruction time *****\n\n" << std::endl;
	for(int i = 0; i < size; i++)
	{
		delete animals[i];
	}
	return (0);
}