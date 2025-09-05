#include <iostream>

int main()
{
    //a)Declare the variables c, thisIsAVariable, q76354 and number to be of type int (in one
    //statement) and initialize each to 0.
    int c{0}, thisIsAVariable{0}, q76354{0}, number{0};
    // b) Prompt the user to enter an integer. End your prompting message with a colon (:) fol
    // lowed by a space and leave the cursor positioned after the space.
    std::cout << "Enter an integer: ";
    // c) Get a value from the user of integer type and print the value by adding 10 to it. 
    std::cin >> c;
    std::cout << c + 10;
    //d) If the variable value is greater than 15, then subtract 5 from value and print the new
    //  value.
    int value = 0;
    std::cin >> value;
    if (value > 15)
    {
        value -= 5;
        std::cout << value << std::endl;
    }
    std::cout << "This is a C++ program\n";
    std::cout << "This is a C++\nprogram\n";
    std::cout << "This\nis\na\nC++\nprogram\n";
    std::cout << "This\tis\ta\tC++\tprogram";
    return 0;
}