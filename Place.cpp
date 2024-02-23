
#include <iostream>
#include "Place.h"
void Place::getPlace() {
    std::cout << "Place: " << name << std::endl
              << "Weather type: " << weather << std::endl
              << "Temperature: " << temperature << std::endl;
}
void Place::setPlace(std::string &&newName) {
    name=newName;
}

Place::Place()
//:name{"Unknown Place"},weather{"Unknown Weather"},temperature{0}
        : Place("Unknown Place","Unknown weather",0)
{}
Place::Place(std::string newPlace)
        :Place(newPlace,"Unknown weather",0)
{}
Place::Place(std::string newPlace, std::string newWeather)
//:name{newPlace},weather{newWeather},temperature{0}
        :Place(newPlace,newWeather,0)
{}
Place::Place(std::string newPlace,std::string newWeather,int newTemperature)
        :name{newPlace},weather{newWeather},temperature{newTemperature}
{
}
Place::~Place(){};