/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:09:44 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/25 15:58:57 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
	private:
	
	const std::string name;
	int grade;

	public:
	
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	std::string getName() const;
	int getGrade() const;
	void promote();
	void demote();
	
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Grade too high!";
		}
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Grade too low!";	
		}
	};
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);

#endif // Bureaucrat_HPP