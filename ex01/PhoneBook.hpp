/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:50:07 by eviscont          #+#    #+#             */
/*   Updated: 2024/10/09 18:14:17 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <cctype>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_num;

	public:
		PhoneBook();
		bool	add_contact(std::string firstName, std::string lastName, \
		std::string nickName, std::string phoneNumber, std::string darkestSecret);
		bool	print_contacts();
};

#endif