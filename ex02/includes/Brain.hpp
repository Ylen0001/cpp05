/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:58:39 by ylenoel           #+#    #+#             */
/*   Updated: 2025/03/07 16:24:42 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:

	std::string ideas[100];

	public:

	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	std::string getIdeas(int idx) const;
	void setIdeas(int idx, const std::string& idea);
	
};

#endif