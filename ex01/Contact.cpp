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
	//age
	std::cout << std::setw(10) << this->get_age() << "|";
	//passion
	if (this->get_passion().size() > 10)
		std::cout << this->get_passion().substr(0, 9) << ".|" << std::endl;
	else
		std::cout << std::setw(10) << this->get_passion() << "|" << std::endl;
}

void Contact::get_info()
{
	std::cout << std::endl << "FIRSTNAME: " << this->get_name() << std::endl;
	std::cout << "SIRNAME: " << this->get_sirname() << std::endl;
	std::cout << "AGE: " << this->get_age() << std::endl;
	std::cout << "PASSION: " << this->get_passion() << std::endl << std::endl;
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
	std::cout << "AGE:";
	std::cin >> input;
	this->set_age(std::stoi(input));
	std::cout << "PASSION:";
	std::cin >> input;
	this->set_passion(input);
}