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

#include <string>
#include <iostream>
#include <cstring>

int	main()
{
	std::string test = "HI THIS IS BRAIN";
	std::string *stringPTR = &test;
	std::string &stringREF = test;


	std::cout << "ADDRESS OF STRING" << std::endl;

	std::cout << &test << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n\n";

	std::cout << "VALUE OF STRING" << std::endl;
	std::cout << test << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
}