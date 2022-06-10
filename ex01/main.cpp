#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	class PhoneBook my_phonebook;

	my_phonebook.set_contact("Jorit", "Tomala", 42, "coding");
	my_phonebook.set_contact("Max", "Mustermann", 43, "lesen");
	my_phonebook.set_contact("Moritz", "Müller", 44, "schreiben");
	my_phonebook.set_contact("Thomas", "Anders", 45, "rede");

	my_phonebook.print_contacts();
}
