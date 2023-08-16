/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <idias-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:42:14 by idias-al          #+#    #+#             */
/*   Updated: 2023/08/16 17:26:42 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	Zombie *zombieClass = newZombie("Emanuel");
	
	randomChump("Toy");
	
	zombieClass->Announce();
	delete zombieClass;
}