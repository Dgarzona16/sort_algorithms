//
// Created by dgarzona on 8/9/2023.
//
#ifndef SORT_OBJECTS_HPP
#define SORT_OBJECTS_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>

//use for car
std::string makers[] = {"Ford", "Chevrolet", "Toyota", "Honda", "Nissan", "Hyundai", "Kia", "BMW", "Mercedes", "Audi"};
static std::string models[] = {"F-150", "Silverado", "Camry", "Accord", "Altima", "Sonata", "Optima", "3 Series", "C-Class", "A4"};
static std::string colors[] = {"Red", "Blue", "Green", "Yellow", "Black", "White", "Silver", "Gray", "Orange", "Purple"};
//use for device
static std::string type[] = {"Laptop", "Desktop", "Tablet", "Phone", "Smart Watch", "Smart TV", "Smart Speaker", "Smart Home Hub", "Smart Appliance", "Smart Car"};
static std::string deviceModel[] = {"MacBook Pro", "iMac", "iPad", "iPhone", "Apple Watch", "Apple TV", "HomePod", "HomePod Mini", "AirPods", "CarPlay"};

struct car{
    int year;
    std::string make;
    std::string model;
    std::string color;
    float price;

    car()
    {
        year = std::rand() % 20 + 2000;
        this->make = makers[std::rand() % 10];
        this->model = models[std::rand() % 10];
        this->color = colors[std::rand() % 10];
        price = std::rand() % 100000 + 10000;
    }

    friend std::ostream& operator<<(std::ostream& os, const car& car)
    {
        os << car.year << " " << car.make << " " << car.model << " " << car.color << " $" << car.price;
        return os;
    }
};

struct device{
    std::string type;
    std::string model;
    int ram;
    int storage;
    float price;
};


#endif //SORT_OBJECTS_HPP
