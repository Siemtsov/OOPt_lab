#include <iostream>
#include "Person.h"
#include "Place.h"
#include "Date.h"

int main() {
    Person person1("Ivan",17,"Male");
    person1.getPerson();
    person1.setName("Anton");
    person1.getPerson();
    std::cout<<std::endl;
    Place place1("City Center", "Sunny", 15);
    place1.getPlace();
    place1.setPlace("Town outskirts");
    place1.getPlace();
    std::cout<<std::endl;
    Date date1("Tuesday",03,2025);
    date1.getDate();
    date1.setDay("Wednesday");
    date1.getDate();

    return 0;
}
