
#include <iostream>
#ifndef OOPT_LAB_PLACE_H
#define OOPT_LAB_PLACE_H


class Place {
private:
    std::string name;
    std::string weather;
    int temperature;
public:
    void getPlace();
    void setPlace (std::string &&newName);

    Place();
    Place(std::string newPlace);
    Place(std::string newPlace,std::string newWeather);
    Place(std::string newPlace,std::string newWeather,int newTemperature);
    ~Place();
};


#endif //OOPT_LAB_PLACE_H
