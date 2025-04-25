/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:10:20 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/24 15:12:16 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"
#include <iostream>

class Dummy : public ATarget
{
    public:
        Dummy();
        ~Dummy();
        ATarget* clone() const;
};

#endif