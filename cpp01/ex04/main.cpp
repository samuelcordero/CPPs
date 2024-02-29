/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:36:14 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/29 19:05:45 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv) {
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		tmp;
	std::string		to_find;
	std::string		to_replace;
	size_t			pos;

	if (argc != 4) {
		std::cerr << "s4l: wrong number of args: args should be a file name, followed by string to replace and new string\n";
		return (1);
	}

	infile.open(argv[1]);
	if (!infile.is_open()) {
		std::cerr << "s4l: couldn't open infile\n";
		return (1);
	}

	tmp = std::string(argv[1]);
	tmp += ".replace";
	outfile.open(tmp.c_str());
	if (!outfile.is_open()) {
		std::cerr << "s4l: couldn't open outfile\n";
		infile.close();
		return (1);
	}

	to_find = std::string(argv[2]);
	to_replace = std::string(argv[3]);
	
	while (getline(infile, tmp) && !infile.fail() && !outfile.fail()) {
		pos = tmp.find(to_find);
		while (pos != std::string::npos) {
			tmp = tmp.substr(0, pos) + to_replace + tmp.substr(pos + to_find.length());
			pos = tmp.find(to_find, pos + to_replace.length());
		}
		outfile << tmp << std::endl;
	}

	infile.close();
	outfile.close();
	return (0);
}
