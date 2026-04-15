#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>
# include <cctype>
# include <cstdlib>

class   PhoneBook
{
    private:
        Contact contacts[8];
        int         save_index;
        int         count;
        void        headerPhoneBook();
        std::string checkString(const std::string& str);
        bool        checkNumber(const std::string& str);
    public:
        PhoneBook();
        int     addPhoneBook();
        void    searchPhoneBook();
};

#endif
