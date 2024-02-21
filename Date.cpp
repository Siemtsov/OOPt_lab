
#include <iostream>
#include "Date.h"

void Date:: getDate(){
    std::cout<<"Day of week: "<<day<<std::endl
             <<"Month: "<<month<<std::endl
             <<"Year: "<<year<<std::endl;
}

void Date::setDay(std::string &&newDay) {
    day=newDay;
}

Date::Date(): Date("Monday",01,2024) {}
Date::Date(std::string newDay, int newMonth, int newYear)
        :day{newDay},month{newMonth},year{newYear}
{}
Date::~Date(){}