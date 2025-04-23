/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:32:23 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/22 16:32:35 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) : name(name), grade_to_exec(grade_to_exec), grade_to_sign(grade_to_sign)
{
	this->is_Signed = false;
	// std::cout << "Form default constructor called!" << std::endl;
}

Form::~Form() {
	// std::cout << "Form destructor called!" << std::endl;
}

Form::Form(const Form& other) : name(other.name), grade_to_exec(other.grade_to_exec), grade_to_sign(other.grade_to_sign) {
	std::cout << "Form copy constructor called!" << std::endl;
	*this = other;
}

Form& Form::operator=(const Form& other) {
	std::cout << "Form copy assignment operator called!" << std::endl;
	if (this != &other) {
		this->name = other.name;
	}
	return *this;
}

const int Form::get_grade_to_sign() const
{
	return (this->grade_to_sign); 
}

const int Form::get_grade_to_exec() const
{
	return (this->grade_to_exec);
}
