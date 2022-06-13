#ifndef _CONTACT_H_
# define _CONTACT_H_
# include <iostream>
# include <string>
# include <iomanip>

class Contact{
	//Constructor
public:
	Contact(void);
	~Contact(void);

	//attributes
private:
	std::string name;
	std::string sirname;
	int age;
	std::string passion;

	//methods
public:
	std::string get_name() {return (name);}
	bool set_name(std::string new_name) {name = new_name; return (true);}
	std::string get_sirname() {return (sirname);}
	bool set_sirname(std::string new_sirname) {sirname = new_sirname; return (true);}
	int get_age() {return (age);}
	bool set_age(int new_age) {age = new_age; return (true);}
	std::string get_passion() {return (passion);}
	bool set_passion(std::string new_passion) {passion = new_passion; return (true);}
	void get_contact(int i);
	void get_info();
	void set_contact();
};

#endif