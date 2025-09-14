/*
5.17 (Calculating Sales) An online retailer sells five products whose retail prices are as follows:
 Product 1, $2.98; product 2, $4.50; product 3, $9.98; product 4, $4.49 and product 5, $6.87.
 Write an application that reads a series of pairs of numbers as follows:
 a) product number
 b) quantity sold
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    unsigned int productNumber = 0;
    unsigned int quantity = 0;
    double prices = 0.00;
    double total = 0.00;

    do
    {
        cout << "Product number: ";
        cin >> productNumber;
        cout << "Quantity sold: ";
        cin >> quantity;
        switch (productNumber)
        {
        case 1:
            prices = 2.98;
            break;
        case 2: 
            prices = 4.50;
            break;
        case 3:
            prices = 9.98;
            break;
        case 4: 
            prices = 4.49;
            break;
        case 5:
            prices = 6.87;
            break;
        default:
            prices = 0;
            cout << "Invalid product number. Stop looping and display the total." <<endl;
            break;
        }

        total = total + prices * quantity;
    } while (productNumber >= 1 && productNumber <= 5);
    
    cout << "The total is $" << total << endl;
}