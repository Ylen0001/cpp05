/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:06:13 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/25 16:15:58 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <iostream>

int main(void) {
	
	// Test too high graded contructor
	try 
	{
		Bureaucrat test("Roger", 0);
		std::cout << test << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	// Test OK constructor
	Bureaucrat CoffeeMaker("CoffeeMaker", 150);
	std::cout << CoffeeMaker << std::endl;

	// Test demoting CoffeeMaker, making him too low graded
	try{
		CoffeeMaker.demote();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	// Test promoting CoffeeMaker OK
	CoffeeMaker.promote();
	std::cout << CoffeeMaker << std::endl;
	return (1);
}