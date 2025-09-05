#include <iostream>
#include <string>
#include "MotorVehicle.h"

using namespace std;

int main() {
    // cout << "Enter the make of the vehicle: ";
    // string makeOfvehicle;
    // cin >> makeOfvehicle;

    // cout << "Enter the year of manufacture: ";
    // int yearOfManufacture{0};
    // cin >> yearOfManufacture;
    // cout << "Enter the color of the vehicle: ";
    // string colorOfVehicle;
    // cin >> colorOfVehicle;


    MotorVehicle vehicle1{"BMW", 2020, "white"}; 
    vehicle1.displayCarDetails();
    // cout << "Enter the fuel vehicle using: ";
    // string fuelOfvehicle;
    // cin >> fuelOfvehicle;
    // vehicle1.setFuelType(fuelOfvehicle);
    // cout << "Enter the capacity of the vehicle: ";
    // int capacityOfVehicle{0};
    // cin >> capacityOfVehicle;
    // vehicle1.setEngineCapacity(capacityOfVehicle);
    // vehicle1.displayCarDetails();

    // cout << "Vehicle2: " << endl;
    MotorVehicle vehicle2{"Mazda", 2019, "green"};
    vehicle2.displayCarDetails();

}