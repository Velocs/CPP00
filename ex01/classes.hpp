/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:19:15 by aliburdi          #+#    #+#             */
/*   Updated: 2023/09/20 23:44:44 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

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
};

class PhoneBook
{
	public:
		int	i;
		Contact _contact[8];
};