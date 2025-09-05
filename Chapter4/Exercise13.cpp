#include <iostream>

using namespace std;

int main () {
    
    double kilometers;
    double petrol;
    double totalKilometers{0};
    double totalPetrol{0};
    double kmsPerLiter;
    double totalKmsPerLiter;

    while (1)
    {
        cout << "Enter kilometers driven (-1 to quit): ";
        cin >> kilometers;
        if (kilometers == -1) {break;}

        cout << "Enter liters of petrol used: ";
        cin >> petrol;
        
        kmsPerLiter = kilometers / petrol;
        cout << "Kms per liter this trip: " << kmsPerLiter << endl;

        totalKilometers += kilometers;
        totalPetrol += petrol;
        totalKmsPerLiter = totalKilometers / totalPetrol;
        cout << "Total kms per liter: " << totalKmsPerLiter << endl;
    }
}