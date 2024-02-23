
#include <iostream>

#ifndef OOPT_LAB_DATE_H
#define OOPT_LAB_DATE_H


class Date {
private:
    std::string day;
    int month;
    int year;
public:
    void getDate();
    void setDay(std::string &&newDay);
    Date();
    Date(std::string newDay);
    Date(std::string newDay,int newMonth);
    Date(std::string newDay, int newMonth,int newYear);
    ~Date();
};


#endif //OOPT_LAB_DATE_H
