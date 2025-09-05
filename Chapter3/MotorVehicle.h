#include <string>
#include <iostream>

class MotorVehicle {
public:
    MotorVehicle(std::string make, int year, std::string color) 
        : make{make}, color{color}
        {
            if (year > 0 && year <= 2024)
            {
                yearOfManufacture = year;
            }
            else {
                std::cout << "Invalid year!!!" << std::endl;
            }
        }
    void setFuelType(std::string fuel) {
        if (fuel != "petrol" && fuel != "oil" && fuel != "petroleum") {
            std::cout << "Invalid fuel!!!" << std::endl;
        }
        else 
        {
            fuelType = fuel;
        }
    }
    std::string getFuelType() const {
        return fuelType;
    }
    void setYearOfManufactue(int year) {
        if (year > 0 && year <= 2024) {
            yearOfManufacture = year;
        }
        else {
            std::cout << "Invalid year!!!" << std::endl;
        }
    }
    int getYearOfManufacture() const {
        return yearOfManufacture;
    }
    void setColor(std::string carColor) {
        color = carColor;
    }
    std::string getColor() const {
        return color;
    }
    void setMake(std::string carMake) {
        make = carMake;
    }
    std::string getMake() const {
        return make;
    }
    void setEngineCapacity(int capacity) {
        if (capacity > 0) {
            engineCapacity = capacity;
        }
        else {
            std::cout << "Invalid capacity!!!" << std::endl;
        }
    }
    int getEngineCapacity() const {
        return engineCapacity;
    }
    void displayCarDetails() {
        std::cout << "Make: " << make << std::endl;
        std::cout << "fuelType: " << fuelType << std::endl;
        std::cout << "Year of manufacture: " << yearOfManufacture << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Capacity: " << engineCapacity << std::endl;
    }


private:
    std::string make;   //Ex: What make of car does he drive?
    std::string fuelType;
    int yearOfManufacture{0};
    std::string color;
    int engineCapacity{0}; //Ex: an engine with a capacity of 1600 cc
};