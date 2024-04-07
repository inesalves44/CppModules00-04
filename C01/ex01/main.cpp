/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <idias-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:42:14 by idias-al          #+#    #+#             */
/*   Updated: 2023/08/16 19:50:58 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/**
 * @brief creates the zombie horde calling the zombie horde function.
 * Also announces the zombies. In the end they are deleted.
 */
int	main()
{
	Zombie* zombieeees;

	if (HORDE_NUMBER < 0)
	{
		std::cout << "Number of zombies has to be greater than 0" << std::endl;
		return 1;
	}
	zombieeees = zombieHorde(HORDE_NUMBER, "Anjos");
	
	for (size_t i = 0; i < 5; i++)
		zombieeees[i].Announce();
	
	delete[] zombieeees;
}