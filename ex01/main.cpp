/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:56:21 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/09 18:06:07 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input, firstName, lastName, nickName, phoneNumber, darkestSecret;

	while (true)
	{
		std::cout << "*-------------------------------------------*\n"
		"|          ADD - Add a new contact          |\n"
		"|          SEARCH - Display a contact       |\n"
		"|          EXIT - Exit PhoneBook            |\n"
		"*-------------------------------------------*" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input == "ADD")
		{
			std::cout << "First name: ";
			std::getline(std::cin, firstName);
			if (std::cin.eof())
				break ;
			std::cout << "Last name: ";
			std::getline(std::cin, lastName);
			if (std::cin.eof())
				break ;
			std::cout << "Nickname: ";
			std::getline(std::cin, nickName);
			if (std::cin.eof())
				break ;
			std::cout << "Phone number: ";
			std::getline(std::cin, phoneNumber);
			if (std::cin.eof())
				break ;
			std::cout << "Darkest secret: ";
			std::getline(std::cin, darkestSecret);
			if (std::cin.eof())
				break ;
		}

	}
}