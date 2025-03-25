/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:08:38 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/25 16:16:19 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) 
{
	if(grade < 1)
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();
	// std::cout << "Bureaucrat default constructor called!" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	// std::cout << "Bureaucrat destructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	std::cout << "Bureaucrat copy constructor called!" << std::endl;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Bureaucrat copy assignment operator called!" << std::endl;
	if (this != &other) {
		this->grade = other.grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const
{
	return(this->name);	
}

int Bureaucrat::getGrade() const
{
	return(this->grade);
}

void Bureaucrat::promote()
{
	if((this->grade - 1) < 1)
		throw GradeTooHighException();
	this->grade -= 1;
}

void Bureaucrat::demote()
{
	if((this->grade + 1) > 150)
		throw GradeTooLowException();
	this->grade += 1;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat)
{
	out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
	return (out);
}