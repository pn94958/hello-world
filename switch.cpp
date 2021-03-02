#include<iostream>

using namespace std;

int getInput()
{
    cout << "Write an integer between 0 and 2: \n";
    int input;
    cin >> input;
    return input;
}

int main()
{
    switch(getInput())
    {
        case 0:
            cout << "You entered 0.\n";
            break;
        case 1:
            cout << "You entered 1.\n";
            break;
        case 2:
            cout << "You entered 2.\n";
            break;
        default:
            cout << "SDKSDDSKEWEWE#:!@!!!!!!RLRRWLREEeke1!!!!!\n";
            break;
    }
}
