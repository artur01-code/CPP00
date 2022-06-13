#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	int i = 1;
	class PhoneBook my_phonebook;
	std::string input;

	my_phonebook.set_contact("Jorit", "Tomala", 42, "coding");
	my_phonebook.set_contact("Max", "Mustermann", 43, "lesen, schreiben, gucken, tanzen");
	my_phonebook.set_contact("Moritz", "Müller", 44, "schreiben");
	my_phonebook.set_contact("Thomas", "Anders", 45, "rede");
	my_phonebook.set_contact("Thomas", "Anders", 45, "rede");
	my_phonebook.set_contact("Thomas", "Anders", 45, "rede");
	my_phonebook.set_contact("Thomas", "Anders", 45, "rede");
	my_phonebook.set_contact("Thomas", "Anders", 45, "rede");

	std::cout << "            _            _.,----," << std::endl << " __  _.-._ / '-.        -  ,._  \\) " << std::endl << "|  `-)_   '-.   \\       / < _ )/\" }" << std::endl << "/__    '-.   \\   '-, ___(c-(6)=(6)" << std::endl << " , `'.    `._ '.  _,'   >\\    \"  )" << std::endl << " :;;,,'-._   '---' (  ( \"/`. -='/" << std::endl << ";:;;:;;,  '..__    ,`-.`)'- '--'" << std::endl << ";';:;;;;;'-._ /'._|   Y/   _/' \\" << std::endl << "      '''\"._ F    |  _/ _.'._   `\\" << std::endl << "             L    \\   \\/     '._  \\" << std::endl << "      .-,-,_ |     `.  `'---,  \\_ _|" << std::endl << "      //    'L    /  \\,   (\"--',=`)7" << std::endl << "     | `._       : _,  \\  /'`-._L,_'-._" << std::endl << "     '--' '-.\\__/ _L   .`'         './/" << std::endl << "                 [ (  /" << std::endl << "                  ) `{" << std::endl << "                  \\__)" << std::endl;
	std::cout << std::endl << "*~WELCOME TO MY PHONEBOOK!~*" << std::endl;
	while (i)
	{
		std::cout << "Please enter ADD to add a contact, SEARCH to search for a contact, or EXIT to exit\n" << std::endl;
		getline(std::cin, input);
		if (input == "EXIT")
			i = 0;
		else if (input == "SEARCH")
			my_phonebook.search_contact();
		else if (input == "ADD")
			my_phonebook.add();

	}
	std::cout << "Bye." << std::endl;
}
