/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <idias-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:34:25 by idias-al          #+#    #+#             */
/*   Updated: 2023/08/16 19:48:29 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* horde = new Zombie[N];

	for (size_t i = 0; i < N; i++)
		horde[i].NameZombie(name);
	
	return (horde);
}