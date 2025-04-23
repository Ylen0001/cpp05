/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:29:36 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/23 17:01:51 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		Warlock(const Warlock& other);
		Warlock& operator=(const Warlock& other);

		std::string getName() const;
		std::string getTitle() const;
		void	setTitle(const std::string& title);
		void introduce() const;
};

#endif