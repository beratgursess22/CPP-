#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>

class PhoneBook
{
    private:
        Contact contacts[8];
        int contactCount;
    public:
        PhoneBook();
        ~PhoneBook();

        void addContact(const Contact& newContact);
        void displayContacts() const;
        const Contact* getContacts() const;
        int getContactCount() const;
};

#endif
