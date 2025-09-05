/*  
(Fibonacci Sequence) Write a program that prints the Fibonacci sequence 0, 1, 1, 2, 3, 5,
8, etc. Use 0 and 1 as your seed values. Each subsequent number in the Fibonacci sequence is the
sum of the previous two numbers. Your while loop should not terminate (i.e., you should create an
infinite loop). To do this, simply use the keyword true as the expression for the while statement.
What happens when you run this program?  
*/

#include <iostream>

using namespace std;

int main() {
    unsigned int seed1 = 0;
    unsigned int seed2 = 1;
    // unsigned int fibo = seed1 + seed2;
    cout << seed1 << ", " << seed2 << ", ";
    while (true)
    {
        /* code */
        unsigned int fibo = seed1 + seed2;
        cout << fibo << ", ";
        seed1 = seed2;
        seed2 = fibo;
    }
    
}