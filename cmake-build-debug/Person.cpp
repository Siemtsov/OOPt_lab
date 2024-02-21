
#include "Person.h"
#include <iostream>
void Person::getPerson() {
    std::cout << "Name: " << name << std::endl
              << "Age: " << age << std::endl
              << "Sex: " << sex << std::endl;
}
void Person::setName(std::string &&newName) {
    name = newName;
}

Person::Person()
//        : name{"None"}, age{0}, sex{"Unknown"} lists of initialization
        : Person("Unknown", 0, "Unknown") {}

Person::Person(std::string newName)
//        : name{newName}, age{0}, sex{"Unknown"}
        : Person(newName, 0, "Unknown") {}

Person::Person(std::string newName, int newAge)
//        : name{newName}, age{newAge}, sex{"Unknown"}
        : Person(newName, newAge, "Unknown") {}

Person::Person(std::string newName, int newAge, std::string newSex)// Delegating constructor
        : name{newName}, age{newAge}, sex{newSex} {
//    std::cout << "Name: " << newName << std::endl
//              << "Age: " << newAge << std::endl
//              << "Sex: " << newSex << std::endl;
}

Person::~Person() {}