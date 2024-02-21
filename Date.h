
#include <iostream>

#ifndef OPPT_LAB2_DATE_H
#define OPPT_LAB2_DATE_H


class Date {
private:
    std::string day;
    int month;
    int year;
public:
    void getDate();
    void setDay(std::string &&newDay);
    Date();
    Date(std::string newDay, int newMonth,int newYear);
    ~Date();
};


#endif //OPPT_LAB2_DATE_H
