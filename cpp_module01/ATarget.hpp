/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <ylenoel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:22:32 by ylenoel           #+#    #+#             */
/*   Updated: 2025/04/24 14:47:50 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ATarget 
{
    protected:
        std::string type;
    public:
        ATarget();
        ATarget(std::string type);
        virtual ~ATarget();
        ATarget& operator=(const ATarget& other);
        ATarget(const ATarget& other);

        std::string getType() const;
        void getHitBySpell(const ASpell& spell) const;
};

#endif