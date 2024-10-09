/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:51:06 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/09 18:24:06 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_num = 0;
}

bool	is_valid_number(const std::string number)
{
	for (std::size_t i = 0; i < number.size(); ++i)
	{
		if (!isdigit(number[i]))
			return false;
	}
	return true;
}

boo	PhoneBook::add_contact(std::string firstName, std::string lastName,
							std::string nickName, std::string phoneNumber,
							std::string darkestSecret)
{
	if (firstName == "" || lastName == "" || nickName == "" || phoneNumber == "" \
		|| darkestSecret == "")
	{
		std::cout << "Contact can't have empty fields." << std::endl;
		return (false);
	}
	if (!is_valid_number(phoneNumber))
	{
		std::cout << "Contact phone number is invalid" << std::endl;
		return (false);
	}
	

}