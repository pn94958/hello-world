#include<iostream>

using namespace std;

int main()
{
    int a;
    cout << "Input an natural 1-3:" << endl;
    cin >> a;
    switch(a)
    {
        case 1:
        cout << "You have chosen 1." << endl;
        break;
        case 2:
        cout << "You have chosen 2." << endl;
        break;
        case 3:
        cout << "You have chosen 3." << endl;
        break;
        default:
        cout << "Invalid input." << endl;
        break;
    }

    return 0;
}
