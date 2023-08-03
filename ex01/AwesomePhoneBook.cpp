/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AwesomePhoneBook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <idias-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:22:33 by idias-al          #+#    #+#             */
/*   Updated: 2023/08/03 19:36:31 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.h"
#include "PhoneBook.h"

int	main() 
{
	Contacts	contact;

	contact.AddContact();

	contact.PrintContact();
}