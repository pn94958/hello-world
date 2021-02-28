#include<iostream>

using namespace std;

int getInput()
{
    cout << "Write an integer: \n";
    int input;
    cin >> input;
    return input;
}

int testInput(int a, int b, int c)
{
    cout << "First variable: " << a << endl;
    cout << "Second variable: " << b << endl;
    cout << "Third variable: " << c << endl;
}



int main()
{
    cout << "9 10 15\n";
    testInput(9, 10, 15);
    cout << "x x x\n";
    testInput(getInput(), getInput(), getInput());
    cout << "x 10 15\n";
    testInput(getInput(),10, 15);
    cout << "9 x 15\n";
    testInput(9, getInput(), 15);
    cout << "x x 15\n";
    testInput(getInput(), getInput(), 15);
    cout << "x 10 x\n";
    testInput(getInput(), 10, getInput());
    cout << "9 x x\n";
    testInput(9, getInput(), getInput());
    return 0;
}
