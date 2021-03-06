#ifndef _PHONEBOOK_H_
# define _PHONEBOOK_H_

# include "Contact.hpp"

class PhoneBook{
	//Constructor
public:
	PhoneBook(void);
	~PhoneBook(void);

	//attributes
private:
	Contact	_contacts[8];
	int num_contacts;

	//methods
public:
	Contact get_contact(int i) {return (_contacts[i]);}
	void set_num_contacts() {num_contacts += 1;}
	void search_contact();
	void set_contact(std::string name, std::string sirname, std::string nickname, std::string phonenumber, std::string secret);
	void add();
};

#endif