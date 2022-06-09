/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:27:52 by jtomala           #+#    #+#             */
/*   Updated: 2022/06/09 15:42:40 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	std::string input;
	
	for (int i = 1; i < argc; i++)
		input += argv[i];
	if (input == "")
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 0; i < (int)input.size(); i++)
			if (islower(input[i]))
				input[i] = toupper(input[i]);
		std::cout << input << std::endl;
	}
}
