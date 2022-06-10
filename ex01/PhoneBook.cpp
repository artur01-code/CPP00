#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	num_contacts = 0;
};

PhoneBook::~PhoneBook()
{

};

void PhoneBook::print_contacts()
{
	int i;

	i = 0;
	while (i < num_contacts)
	{
		std::cout << "------------------------------------------" << std::endl;
		std::cout << " | " << _contacts[i].get_name() << " | " << _contacts[i].get_sirname() << " | " << _contacts[i].get_age() << " | " << _contacts[i].get_passion() << " | " << std::endl;
		i++;
	}
	std::cout << "------------------------------------------" << std::endl;
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