/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:51:26 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 15:34:47 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include "ASpell.hpp"
#include <iostream>

class Fireball : public ASpell
{
    private:
        std::string name;
    public:
        Fireball();
        ~Fireball();

        ASpell* clone() const;
};

#endif