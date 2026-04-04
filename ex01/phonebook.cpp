#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
  save_index = 0;
  count = 0;
}

void  PhoneBook::addPhoneBook()
{
  contacts[save_index].addContact();
  save_index = (save_index + 1) % 8;
  if (count < 8)
    count++;
}

void  PhoneBook::headerPhoneBook()
{
  std::cout << std::setw(10) << "index" << "|";
  std::cout << std::setw(10) << "first name" << "|";
  std::cout << std::setw(10) << "last name" << "|";
  std::cout << std::setw(10) << "nickname" << std::endl;
}

std::string PhoneBook::checkString(const std::string& str)
{
  std::string result = str;

  if (result.length() > 10)
    result = result.substr(0, 9) + ".";
  return (result);
}

bool  PhoneBook::checkNumber(const std::string& str)
{
  if (str.empty())
    return (false);
  for (size_t i = 0; i < str.length(); i++)
  {
    if (!isdigit(str[i]))
      return (false);
  }
  return (true);
}

void  PhoneBook::searchPhoneBook()
{
  int         i;
  std::string val;
  bool        number;
  int         val_index;

  if (count == 0)
  {
    std::cout << "Phonebook is empty" << std::endl;
    return ;
  }
  headerPhoneBook();
  for (i = 0; i < count; i++)
  {
    std::cout << std::setw(10) << i << "|";
    std::cout << std::setw(10) << checkString(contacts[i].getFirstname()) << "|";
    std::cout << std::setw(10) << checkString(contacts[i].getLastname()) << "|";
    std::cout << std::setw(10) << checkString(contacts[i].getNickname()) << std::endl;
  }
  std::cout << "Enter index: ";
  std::getline(std::cin, val);
  number = checkNumber(val);
  if (!number)
  {
    std::cout << "Error ! Enter a valid index." << std::endl;
    return ;
  }
  val_index = std::atoi(val.c_str());
  if (val_index < 0 || val_index >= count)
  {
    std::cout << "Error ! Enter a valid index." << std::endl;
    return ;
  }
  contacts[val_index].displayContact();
}
