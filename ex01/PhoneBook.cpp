#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	num_contacts = 0;
};

PhoneBook::~PhoneBook()
{

};

//name it search
void PhoneBook::search_contact()
{
	int i;
	int input;

	i = 0;
	if (num_contacts == 0)
	{
		std::cout << "Phonebook is empty." << std::endl << "       __   __\n      /  \\./  \\/\\_\n  __{^\\_ _}_   )  }/^\\n /  /\\_/^\\._}_/  //  /\n(  (__{(@)}\\__}.//_/__A____A_______A________A________A_____A___A___A______\n \\__/{/(_)\\_}  )\\ \\---v-----V-----V---Y-----v----Y------v-----V-----v---\n   (   (__)_)_/  )\\ \\>\n    \\__/     \\__/\\/\\/\n       \\__,--'" << std::endl;
	}
	else
	{
		std::cout <<"|    INDEX |      NAME|   SIRNAME|  NICKNAME|" << std::endl;
		//std::cout << "i: " << i << std::endl << "num: " << num_contacts << std::endl;
		while (i < 8)
		{
			_contacts[i].get_contact(i);
			i++;
		}
		std::cout << std::endl << "For which one are you searching?" << std::endl;
		std::cin >> input;
		if (input <= num_contacts)
			_contacts[input].get_info();
		else
			std::cout << "Wrong input. Please enter a valid index." << std::endl;

	}
}

void PhoneBook::add()
{
	int i;

	num_contacts++;
	i = num_contacts;
	if (num_contacts > 8)
		i = num_contacts % 8;
	_contacts[i - 1].set_contact();
	std::cout << "Contact saved!\n\n";
}

void PhoneBook::set_contact(std::string name, std::string sirname, std::string nickname, std::string phonenumber, std::string secret)
{
	int i;

	i = 0;
	while (i < num_contacts)
		i++;
	_contacts[i].set_name(name);
	_contacts[i].set_sirname(sirname);
	_contacts[i].set_nickname(nickname);
	_contacts[i].set_phonenumber(phonenumber);
	_contacts[i].set_secret(secret);
	set_num_contacts();
}