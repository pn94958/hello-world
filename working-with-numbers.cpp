#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    cout << "int 10 / 3 = " << 10 / 3 << " with remainder of " << 10 % 3 << ".\n";
    cout << endl;

    cout << "double 10 / 3 = " << 10.0 / 3.0 << ".\n";
    cout << endl;

    cout << "int 2420493290290329012 / 494991 = " << 2420493290290329012 / 494991 << " with remainder of " << 2420493290290329012 % 494991 << ".\n";
    cout << endl;

    cout << "double 494991 / 2420493290290329012 = " << 494991 / 2420493290290329012.0 << ".\n";
    cout << endl;

    double number;
    number = 494991 / 2420493290290329012.0;
    cout << "The squareroot of " << number << " is " << sqrt(number) << ".\n";
    cout << endl;
    number = 111;
    
    cout << "This number is being incremented: " << number++ << ".\n";
    cout << endl;
    cout << "This number was incremented in previous line: " << number << ".\n";
    cout << endl;
    cout << number << " ^ 3 = " << pow(number, 3) << ".\n";
    cout << endl;
    cout << "The square root of " << number << " is " << sqrt(number) << ".\n";
    cout << endl;
    cout << 1942.204293993 << " rounded is " << round(1942.204293993) << ".\n";
    cout << endl;
    cout << 1304.11333919193 << " rounded up is " << ceil(1304.11333919193) << ".\n";
    cout << endl;
    cout << 2.5906 << " rounded down is " << floor(2.5906) << ".\n";
    cout << endl;
    cout << fmax(39439040.44929902902, 49494902929.49493293932) << " is higher than " << fmin(39439040.44929902902, 49494902929.49493293932) << ".\n";
    return 0;
}
