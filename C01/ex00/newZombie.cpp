/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <idias-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:26:59 by idias-al          #+#    #+#             */
/*   Updated: 2023/08/16 16:45:48 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/**
 * @brief allocs memory for a new zombie calling the constructor. With the new keyword
 * @name the name of the zombie
 * @returns the new created zombie
*/
Zombie* newZombie( std::string name )
{
	Zombie *newZombie = new Zombie(name);

	return (newZombie);
}