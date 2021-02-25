#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int arrayn[] = {1, 2, 3};
    cout << arrayn[0] << " " << arrayn[1] << " " << arrayn[2] << endl;

    int arrayn2[3];
    cout << "Enter a number:\n";
    cin >> arrayn2[0];
    cout << "Enter a number:\n";
    cin >> arrayn2[1];
    cout << "Enter a number:\n";
    cin >> arrayn2[2];

    cout << "Entered numbers:\n";
    cout << arrayn2[0] << " " << arrayn2[1] << " " << arrayn2[2] << endl;

    cout << "Processing numbers:\n";

    arrayn2[0] = arrayn2[1] + arrayn2[2];
    arrayn2[1] = arrayn2[0] / arrayn2[2];
    arrayn2[2] = sqrt(arrayn2[0]);

    cout << arrayn2[0] << " " << arrayn2[1] << " " << arrayn2[2] << endl;
    return 0;
}
