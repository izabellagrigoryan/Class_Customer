// Customer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Account {

    std::string account_number;
    std::string account_type;
    std::string account_amount;
};

class Person {
    std::string firstname;
    std::string surname;
    std::string patronymic;

    std::string birthday;
    std::string address;
    std::string phone;

    std::string passportID;
    std::string socialcard;
    std::string xerox_filename;

    Account accounts[5];

public:
    Person(){}
    Person(std::string passportID, std::string socialcard)
    {
        this->passportID = passportID;
        this->socialcard = socialcard;
    }

    void init_person(){}
    void open_account(){}
    void close_account(){}
};

int main()
{
    Person person("AB123456", "1234567");
    return 0;
}

