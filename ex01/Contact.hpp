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
	std::string nickname;
	std::string phonenumber;
	std::string secret;

	//methods
public:
	std::string get_name() {return (name);}
	bool set_name(std::string new_name) {name = new_name; return (true);}
	std::string get_sirname() {return (sirname);}
	bool set_sirname(std::string new_sirname) {sirname = new_sirname; return (true);}
	std::string get_nickname() {return (nickname);}
	bool set_nickname(std::string new_nickname) {nickname = new_nickname; return (true);};
	std::string get_phonenumber() {return (phonenumber);}
	bool set_phonenumber(std::string new_phonenumber) {phonenumber =  new_phonenumber; return (true);}
	std::string get_secret() {return (secret);}
	bool set_secret(std::string new_secret) {secret = new_secret; return (true);}
	void get_contact(int i);
	void get_info();
	void set_contact();
};

#endif