#include <iostream>

using namespace std;

int main()
{
	// int   i =8, *p =0;
	// p = &i;
	// cout << p;
    // cout << "\nThe address of variable i is: " << &i << endl;

    //int* p; float a; p = &((int) a);


    // --------- Cau 5 ------------
    // int *p, *q, i = 8, j = 9;
	// p =&i; q = &j;
	// cout << *p;
	// *q = i;	cout << *q;
	// q = p; cout <<*q;
	// p =q; cout <<*p;

    // ---------Cau 7 ------------
    int *p, str[3];
	cin >> str[0]; cin >> str[1]; cin >>str[2];
	p = str;
	cout << *p << " ";
	cout << ++*p << " ";
	cout << *p++ << " ";
	cout << *p-- << " ";

    // --------- Cau 8 ------------
    char * a[3] ;

}
