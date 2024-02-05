/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:50:17 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/05 23:24:48 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __PHONEBOOK_H__
#  define __PHONEBOOK_H__
#  include "Contact.hpp"

class PhoneBook {
	private:
		Contact 		pb_arr[8];
		unsigned int	index;
		void	printContacts();
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact();
};

#endif /* __PHONEBOOK_H__ */
