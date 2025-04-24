/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:51:26 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/24 15:04:15 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"
#include <iostream>

class Fwoosh : public ASpell
{
    private:
        std::string name;
    public:
        Fwoosh();
        ~Fwoosh();

        ASpell* clone() const;
};

#endif