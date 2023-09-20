/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:31:46 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/20 23:43:30 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes.hpp"

void	print(PhoneBook phonebook)
{
	int j = 0;
	while (j < phonebook.i)
	{
		std::cout << j << " | ";
		std::cout << phonebook._contact[j].get_first_name() << "| ";
		std::cout << phonebook._contact[j].get_last_name() << "| ";
		std::cout << phonebook._contact[j].get_nickname() << std::endl;
		j++;
	}
}

int	main(void)
{
	PhoneBook phonebook;

	phonebook.i = 0;
	while (1)
	{
		std::string command;
		
		std::cin >> command;
		if (command == "ADD")
		{
		    phonebook._contact[phonebook.i].set_first_name();
		    phonebook._contact[phonebook.i].set_last_name();
		    phonebook._contact[phonebook.i].set_nickname();
		    phonebook._contact[phonebook.i].set_phone_number();
		    phonebook._contact[phonebook.i].set_darkest_secret();
		    phonebook.i++;
		    if (phonebook.i == 9)
			    phonebook.i = 0;
		}
		if (command == "SEARCH")
		{
			print(phonebook);
		}
		else if (command == "EXIT")
			exit(0);
	}
}