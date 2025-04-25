/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:51:26 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 15:37:35 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include "ASpell.hpp"
#include <iostream>

class Polymorph : public ASpell
{
    private:
        std::string name;
    public:
        Polymorph();
        ~Polymorph();

        ASpell* clone() const;
};

#endif