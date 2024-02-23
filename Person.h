
#ifndef OOPT_LAB_PERSON_H
#define OOPT_LAB_PERSON_H
#include <iostream>

class Person {
private:
    std::string name;
    int age;
    std::string sex;
public:
    void getPerson();
    void setName(std::string &&newName);

    Person();
    Person(std::string newName);
    Person(std::string newName,int newAge);
    Person(std::string newName,int newAge,std::string newSex);
    ~Person();
};


#endif //OOPT_LAB_PERSON_H
