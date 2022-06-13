#include "Contact.hpp"

Contact::Contact()
{

};

Contact::~Contact()
{

};

void Contact::get_contact(int i)
{
	//index
	std::cout << "|" << std::setw(10) << i << "|";
	//name
	if (this->get_name().size() > 10)
		std::cout << this->get_name().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->get_name() << "|";
	//sirname
	if (this->get_sirname().size() > 10)
		std::cout << this->get_sirname().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->get_sirname() << "|";
	//nickname
	if (this->get_nickname().size() > 10)
		std::cout << this->get_nickname().substr(0, 9) << ".|" << std::endl;
	else
		std::cout << std::setw(10) << this->get_nickname() << "|" << std::endl;
}

void Contact::get_info()
{
	std::cout << std::endl << "FIRSTNAME: " << this->get_name() << std::endl;
	std::cout << "SIRNAME: " << this->get_sirname() << std::endl;
	std::cout << "NICKNAME: " << this->get_nickname() << std::endl;
	std::cout << "PHONENUMBER: " << this->get_phonenumber() << std::endl;
	std::cout << "DARKEST SECRET: " << this->get_secret() << std::endl << std::endl;
}

void Contact::set_contact()
{
	std::string input;

	std::cout << "FIRSTNAME:";
	std::cin >> input;
	this->set_name(input);
	std::cout << "SIRNAME:";
	std::cin >> input;
	this->set_sirname(input);
	std::cout << "NICKNAME:";
	std::cin >> input;
	this->set_nickname(input);
	std::cout << "PHONENUMBER:";
	std::cin >> input;
	this->set_phonenumber(input);
	std::cout << "DARKEST SECRET:";
	std::cin >> input;
	this->set_secret(input);

}