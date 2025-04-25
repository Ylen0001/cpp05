/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brickwall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:10:20 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/25 15:38:43 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"
#include <iostream>

class BrickWall : public ATarget
{
    public:
        BrickWall();
        ~BrickWall();
        ATarget* clone() const;
};

#endif