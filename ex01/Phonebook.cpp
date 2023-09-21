/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:31:46 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/21 19:41:33 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes.hpp"

void	print_space(int x, std::string name)
{
	int counter;

	counter = 10 - x;
	if(counter >= 0)
	{
		while(counter)
		{
			std::cout << " ";
			counter--;
		}
		std::string input(name);
		std::cout << input << "|";
	}
	else
	{
		std::string first_nine_char(name, 0, 9);
		std::cout << first_nine_char << ".|";
	}
}

void	print(PhoneBook phonebook)
{
	int j = 0;
	int	index = -1;
	
	if (!phonebook.x)
	{
		while (j < phonebook.i)
		{
			std::cout << "|         " << j << "|";
			print_space(phonebook.contact[j].get_size_first_name(), phonebook.contact[j].get_first_name());
			print_space(phonebook.contact[j].get_size_last_name(), phonebook.contact[j].get_last_name());
			print_space(phonebook.contact[j].get_size_nickname(), phonebook.contact[j].get_nickname());
			std::cout << std::endl;
			j++;
		}
		std::cout << "Input index: ";
		std::cin >> index;
		if (index > 7 || index < 0 || index >= phonebook.k)
		{
			std::cout << "Invalid index" << std::endl;
		}
		else
		{
			std::cout << "First name: " << phonebook.contact[index].get_first_name() << std::endl;
			std::cout << "Last name: " << phonebook.contact[index].get_last_name() << std::endl;
			std::cout << "Nickname: " << phonebook.contact[index].get_nickname() << std::endl;
			std::cout << "Phone number: " << phonebook.contact[index].get_phone_number() << std::endl;
			std::cout << "Darkest secret: " << phonebook.contact[index].get_darkest_secret() << std::endl;
		}
	}
	else if (phonebook.x == 1)
	{
		j = 0;
		while (j < 8)
		{
			std::cout << "|         " << j << "|";
			print_space(phonebook.contact[j].get_size_first_name(), phonebook.contact[j].get_first_name());
			print_space(phonebook.contact[j].get_size_last_name(), phonebook.contact[j].get_last_name());
			print_space(phonebook.contact[j].get_size_nickname(), phonebook.contact[j].get_nickname());
			std::cout << std::endl;
			j++;
		}
		std::cout << "Input index: ";
		std::cin >> index;
		if (index > 7 || index < 0 || index >= phonebook.k)
		{
			std::cout << "Invalid index" << std::endl;
		}
		else
		{
			std::cout << "First name: " << phonebook.contact[index].get_first_name() << std::endl;
			std::cout << "Last name: " << phonebook.contact[index].get_last_name() << std::endl;
			std::cout << "Nickname: " << phonebook.contact[index].get_nickname() << std::endl;
			std::cout << "Phone number: " << phonebook.contact[index].get_phone_number() << std::endl;
			std::cout << "Darkest secret: " << phonebook.contact[index].get_darkest_secret() << std::endl;
		}
	}
}

int	main(void)
{
	PhoneBook phonebook;

	phonebook.i = 0;
	phonebook.x = 0;
	phonebook.k = 0;
	while (1)
	{
		std::string command;
		
		std::cin >> command;
		if (command == "ADD")
		{
		    phonebook.contact[phonebook.i].set_first_name();
		    phonebook.contact[phonebook.i].set_last_name();
		    phonebook.contact[phonebook.i].set_nickname();
		    phonebook.contact[phonebook.i].set_phone_number();
		    phonebook.contact[phonebook.i].set_darkest_secret();
		    phonebook.i++;
		    if (phonebook.i == 8)
			{
				if (phonebook.x == 0)
					phonebook.x = 1;
			    phonebook.i = 0;
			}
			if (phonebook.k < 8)
				phonebook.k++;
		}
		else if (command == "SEARCH")
		{
			print(phonebook);
		}
		else if (command == "EXIT")
			exit(0);
	}
}