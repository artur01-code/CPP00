#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	int i = 1;
	class PhoneBook my_phonebook;
	std::string input;

	my_phonebook.set_contact("Jorit", "Tomala", "jtomala", "012345678", "stinkt im dunkeln");
	my_phonebook.set_contact("Max", "Mustermann", "jajaja", "45678987654", "lesen, schreiben, gucken, tanzen");
	my_phonebook.set_contact("Moritz", "Mueller", "liaie", "456456456", "schreiben");
	my_phonebook.set_contact("Thomas", "Anders", "oaoaoa", "3453462452", "rede");
	my_phonebook.set_contact("Thomas", "Anders", "wewewe", "345346346346", "rede");
	my_phonebook.set_contact("Thomas", "Anders", "rtrtrt", "9876543234", "rede");
	my_phonebook.set_contact("Thomas", "Anders", "bnbnb", "234545757", "rede");
	my_phonebook.set_contact("Thomas", "Anders", "mcmcmc", "049382948", "rede");

	std::cout << "            _            _.,----," << std::endl << " __  _.-._ / '-.        -  ,._  \\) " << std::endl << "|  `-)_   '-.   \\       / < _ )/\" }" << std::endl << "/__    '-.   \\   '-, ___(c-(6)=(6)" << std::endl << " , `'.    `._ '.  _,'   >\\    \"  )" << std::endl << " :;;,,'-._   '---' (  ( \"/`. -='/" << std::endl << ";:;;:;;,  '..__    ,`-.`)'- '--'" << std::endl << ";';:;;;;;'-._ /'._|   Y/   _/' \\" << std::endl << "      '''\"._ F    |  _/ _.'._   `\\" << std::endl << "             L    \\   \\/     '._  \\" << std::endl << "      .-,-,_ |     `.  `'---,  \\_ _|" << std::endl << "      //    'L    /  \\,   (\"--',=`)7" << std::endl << "     | `._       : _,  \\  /'`-._L,_'-._" << std::endl << "     '--' '-.\\__/ _L   .`'         './/" << std::endl << "                 [ (  /" << std::endl << "                  ) `{" << std::endl << "                  \\__)" << std::endl;
	std::cout << std::endl << "*~WELCOME TO MY PHONEBOOK!~*" << std::endl;
	while (i == 1)
	{
		std::cout << "Please enter ADD to add a contact, SEARCH to search for a contact, or EXIT to exit\n" << std::endl;
		getline(std::cin, input);
		if (input == "EXIT")
			i = 0;
		else if (input == "SEARCH")
			my_phonebook.search_contact();
		else if (input == "ADD")
			my_phonebook.add();
		else
			std::cout << "Invalid input, please try again!" << std::endl;

	}
	std::cout << "Bye." << std::endl;
}
