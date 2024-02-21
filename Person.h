
#ifndef OPPT_LAB2_PERSON_H
#define OPPT_LAB2_PERSON_H
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


#endif //OPPT_LAB2_PERSON_H
