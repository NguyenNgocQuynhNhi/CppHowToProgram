// Fig. 15.11: fig15_15.cpp
// Testing Standard Library vector class template
// element-manipulation functions.
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>
using namespace std;

int main() {

    vector<int> values{1, 2, 3, 4, 5, 6};
    vector<int> integers{values.cbegin(), values.cend()};
    ostream_iterator<int> output{cout, " "};

    cout << "Vector integers contains: ";
    copy(integers.cbegin(), integers.cend(), output);

    cout << "\nFirst element of integers: " << integers.front()
        << "\nLast element of integers: " << integers.back();

    integers[0] = 7;
    integers.at(2) = 10;

    // insert 22 as 2nd element 
    integers.insert(integers.cbegin() + 1, 22);

    cout << "\n\nContents of vector integers after changes: ";
    copy(integers.cbegin(), integers.cend(), output);

    // access out-of-range element
    try {
        integers.at(100) = 777;
    }
    catch (out_of_range &outOfRange) {  // out_of_range exception
        cout << "\n\nException: " << outOfRange.what();
    }

    integers.erase(integers.cbegin()); // erase first element
    cout << "\n\nVector integers after erasing first element: ";
    copy(integers.cbegin(), integers.cend(), output);

    // erase remaining elements
    integers.erase(integers.cbegin(), integers.cend());
    cout << "\nAfter erasing all elements, vector integers " 
        << (integers.empty() ? "is" : "is not") << " empty";

    // insert elements from the vector values
    integers.insert(integers.cbegin(), values.cbegin(), values.cend());
    cout << "\n\nContents of vector integers before clear: ";
    copy(integers.cbegin(), integers.cend(), output);

    // empty integers; clear calls erase to empty a collection 
    integers.clear();
    cout << "\nAfter clear, vector integers "
        << (integers.empty() ? "is" : "is not") << " empty" << endl;
    cout << "\nThe size of vector integers is: " << integers.size();
    cout << "\nThe capacity of vector integers is: " << integers.capacity();
}
