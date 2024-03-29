/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inesalves <inesalves@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:34:25 by idias-al          #+#    #+#             */
/*   Updated: 2024/03/29 18:59:28 by inesalves        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/**
 * @brief CReates N zombies as an array of objects.
 * It calls the NameZombie for each of the zombies.
 * @param N -> number of zombies
 * @param name -> name for all the zombies
 * @return Zombie* -> the pointer for the first object of the array
 */
Zombie* zombieHorde( int N, std::string name )
{
	Zombie* horde = new Zombie[N];
	std::string testname;

	for (size_t i = 0; i < N; i++)
		horde[i].SetNameZombie(name);
		
	
	return (horde);
}