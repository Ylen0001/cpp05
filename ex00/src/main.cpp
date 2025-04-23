/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:06:13 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/22 15:18:48 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <iostream>

int main(void) {
	
	// Test too high graded contructor
	try 
	{
		std::cout << C_STEEL_BLUE "Test : Creating Roger grade 0" C_RESET << std::endl;
		Bureaucrat test("Roger", 0);
		std::cout << test << std::endl;
	}
	catch (std::exception &e){
		std::cout << C_SILVER << e.what() << C_RESET << std::endl;
	}

	// Test OK constructor
	std::cout << C_STEEL_BLUE "\nTest : Creating CoffeeMaker grade 150" C_RESET << std::endl;
	Bureaucrat CoffeeMaker("CoffeeMaker", 150);
	std::cout << CoffeeMaker << std::endl;

	// Test demoting CoffeeMaker, making him too low graded
	try{
		std::cout << C_STEEL_BLUE "Demoting CoffeeMaker :" C_RESET << std::endl;
		CoffeeMaker.demote();
	}
	catch(std::exception &e){
		std::cout << C_SILVER << e.what() << C_RESET << std::endl;
	}

	// Test promoting CoffeeMaker OK
	std::cout << C_STEEL_BLUE "\nPromoting CoffeeMaker :" C_RESET << std::endl;
	CoffeeMaker.promote();
	std::cout << CoffeeMaker << std::endl;
	return (1);
}