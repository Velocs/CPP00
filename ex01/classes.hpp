/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:19:15 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/21 19:36:58 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void set_first_name(void)
		{
			std::cout << "First name: ";
			std::cin >> this->first_name;		
		}
		void set_last_name(void)
		{
			std::cout << "Last name: ";
			std::cin >> this->last_name;
		}
		void set_nickname(void)
		{
			std::cout << "Nickname: ";
			std::cin >> this->nickname;
		}
		void set_phone_number(void)
		{
			std::cout << "Phone number: ";
			std::cin >> this->phone_number;
		}
		void set_darkest_secret(void)
		{
			std::cout << "Darkest secret: ";
			std::cin >> this->darkest_secret;
		}
		std::string get_first_name(void)
		{
			return (this->first_name);
		}
		std::string get_last_name(void)
		{
			return (this->last_name);
		}
		std::string get_nickname(void)
		{
			return (this->nickname);
		}
		std::string get_phone_number(void)
		{
			return (this->phone_number);
		}
		std::string get_darkest_secret(void)
		{
			return (this->darkest_secret);
		}
		int get_size_first_name(void)
		{
			return (this->first_name.size());
		}
		int get_size_last_name(void)
		{
			return (this->last_name.size());
		}
		int get_size_nickname(void)
		{
			return (this->nickname.size());
		}
};

class PhoneBook
{
	public:
		int	i;
		int	x;
		int	k;
		Contact contact[8];
};