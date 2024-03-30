/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inesalves <inesalves@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:42:14 by idias-al          #+#    #+#             */
/*   Updated: 2024/03/29 19:02:29 by inesalves        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstring>

// https://www.geeksforgeeks.org/pointers-vs-references-cpp/
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