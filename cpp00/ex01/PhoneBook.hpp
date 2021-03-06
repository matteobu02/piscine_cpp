/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:21:27 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/07 13:24:47 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	public:
		void		add_contact(Contact contact);
		Contact		*getContact(int i);
		static int	getNumber(void);

	private:
		Contact		_contacts[8];
		static int	_number;
};

#endif
