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

	i = 0;
	if (num_contacts == 0)
	{
		std::cout << "Phonebook is empty." << std::endl << "       __   __\n      /  \\./  \\/\\_\n  __{^\\_ _}_   )  }/^\\n /  /\\_/^\\._}_/  //  /\n(  (__{(@)}\\__}.//_/__A____A_______A________A________A_____A___A___A______\n \\__/{/(_)\\_}  )\\ \\---v-----V-----V---Y-----v----Y------v-----V-----v---\n   (   (__)_)_/  )\\ \\>\n    \\__/     \\__/\\/\\/\n       \\__,--'" << std::endl;
	}
	else
	{
		std::cout << "| ID | NAME | SIRNAME | AGE | PASSION |" << std::endl;
		while (i < num_contacts)
		{
			//_contacts[i].get_contact();
		}
	}
}

void PhoneBook::set_contact(std::string name, std::string sirname, int age, std::string passion)
{
	int i;

	i = 0;
	while (i < num_contacts)
		i++;
	_contacts[i].set_name(name);
	_contacts[i].set_sirname(sirname);
	_contacts[i].set_age(age);
	_contacts[i].set_passion(passion);
	set_num_contacts();
}