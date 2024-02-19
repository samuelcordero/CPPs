/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:50:22 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/19 10:16:45 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __CONTACT_H__
#  define __CONTACT_H__
#  include <string>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
		void		setName(std::string name);
		void		setLastName(std::string last_name);
		void		setNick(std::string nick);
		void		setPhone(std::string phone);
		void		setSecret(std::string secret);
		std::string	getName();
		std::string	getLastName();
		std::string	getNick();
		std::string	getPhone();
		std::string	getSecret();
		void		printInfo();
};

#endif /* __CONTACT_H__ */