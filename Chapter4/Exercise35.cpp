/* 
 4.35 (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
 and is defined as follows:
 n! = n · (n – 1) · (n – 2) · … · 1   (for values of n greater than 1)
 and
 n! = 1   (for n = 0 or n = 1).
 For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. Use while statements in each of the following:
 a) Write a program that reads a nonnegative integer and computes and prints its factorial.
 b) Write a program that estimates the value of the mathematical constant e by using the
 formula: 
e
 =
 1 1
 1!-----
 1
 2!-----
 + + + +-----
 1
 3!
 …
 Prompt the user for the desired accuracy of e (i.e., the number of terms in the summa
tion).
 c) Write a program that computes the value of ex by using the formula 
ex
 =
 1 x
 1!-----
 x2
 2!-----
 + + + +
 x3
 3!-----
 …
 Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).
*/

#include <iostream>

using namespace std;

int main() {
    int x;
    do
    {   
        cout << "Enter a nonnegative integer: " << endl;
        cin >> x;
        if (x < 0) {
            cout << "Invalid number!!! Please try again." << endl;
        }
    } while (x < 0);
    
    int factorial = 1;
    cout << "The factorial of " << x << " is: ";
    while (x >= 1)
    {
        /* code */
        factorial *= x;
        x--;
    }
    cout << factorial << endl;
    
}