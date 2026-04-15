#include "phonebook.hpp"

int main(void)
{
  PhoneBook   phonebook;
  std::string command;

  while (1)
  {
    std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
    if (!std::getline(std::cin, command))
      break ;
    if (command.empty())
      continue ;
    if (command == "ADD")
    {
      if (!phonebook.addPhoneBook())
        return (1);
    }
    else if (command == "SEARCH")
      phonebook.searchPhoneBook();
    else if (command == "EXIT")
      break ;
    else
      std::cout << "Error! Enter a valid command." << std::endl;
  }
  return (0);
}
