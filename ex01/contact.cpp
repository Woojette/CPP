#include "contact.hpp"

void	Contact::addContact()
{
	while (1)
	{
		std::cout << "First name: ";
		std::getline(std::cin, first_name);
		if (!first_name.empty())
			break;
	}
	while (1)
	{
		std::cout << "Last name: ";
		std::getline(std::cin, last_name);
		if (!last_name.empty())
			break;
	}
	while (1)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, nickname);
		if (!nickname.empty())
			break;
	}
	while (1)
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, phone_number);
		if (!phone_number.empty())
			break;
	}
	while (1)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, darkest_secret);
		if (!darkest_secret.empty())
			break;
	}
}

void	Contact::displayContact()
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

std::string	Contact::getFirstname()
{
	return (first_name);
}

std::string	Contact::getLastname()
{
	return (last_name);
}

std::string	Contact::getNickname()
{
	return (nickname);
}
