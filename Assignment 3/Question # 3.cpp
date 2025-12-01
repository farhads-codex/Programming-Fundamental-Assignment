#include <iostream>
using namespace std;

int main()
{
    int height, feet, inches;
    cout << "Enter your height in inches: ";
    cin >> height;

    feet = height / 12;
    inches = height % 12;

    cout << "\nHeight: " << feet << " feet " << inches << " inches" << endl;
    return 0;
}
