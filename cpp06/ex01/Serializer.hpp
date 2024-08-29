/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:33:56 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/29 16:23:03 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SERIALIZER_H__
# define __SERIALIZER_H__
# include <string>
# include <stdint.h>

typedef struct s_Data {
	int 	an_integer;
	double	a_double;
}	Data;

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer &);
		Serializer &operator=(const Serializer &);
	public:
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};

#endif
