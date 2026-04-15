#include "contact.hpp"

int	Contact::addContact()
{
	while (1)
	{
		std::cout << "First name: ";
		if (!std::getline(std::cin, first_name))
			return (0);
		if (first_name.empty())
			continue;
		break;
	}
	while (1)
	{
		std::cout << "Last name: ";
		if (!std::getline(std::cin, last_name))
			return (0);
		if (last_name.empty())
			continue;
		break;
	}
	while (1)
	{
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, nickname))
			return (0);
		if (nickname.empty())
			continue;
		break;
	}
	while (1)
	{
		std::cout << "Phone number: ";
		if (!std::getline(std::cin, phone_number))
			return (0);
		if (phone_number.empty())
			continue;
		break;
	}
	while (1)
	{
		std::cout << "Darkest secret: ";
		if (!std::getline(std::cin, darkest_secret))
			return (0);
		if (darkest_secret.empty())
			continue;
		break;
	}
	return (1);
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
