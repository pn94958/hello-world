#include<iostream>

using namespace std;

int getInput()
{
    cout << "Write an integer: \n";
    int input;
    cin >> input;
    return input;
}

int aInput()
{
    int input;
    input = 1;
    return input;
}

int bInput()
{
    int input;
    input = 2;
    return input;
}

int cInput()
{
    int input;
    input = 3;
    return input;
}

int testInput(int c, int b, int a)
{
    cout << "First variable: " << a << endl;
    cout << "Second variable: " << b << endl;
    cout << "Third variable: " << c << endl;
}

int main()
{
    cout << "9 10 15\n";
    testInput(15, 10, 9);
    cout << "x x x\n";
    testInput(getInput(), getInput(), getInput());
    cout << "x 10 15\n";
    testInput(15, 10, getInput());
    cout << "9 x 15\n";
    testInput(15, getInput(), 9);
    cout << "x x 15\n";
    testInput(15, getInput(), getInput());
    cout << "x 10 x\n";
    testInput(getInput(), 10, getInput());
    cout << "9 x x\n";
    testInput(getInput(), getInput(), 9);
    

    cout << endl << "9 10 15\n";
    testInput(15, 10, 9);
    cout << "x1 x2 x3\n";
    testInput(cInput(), bInput(), aInput());
    cout << "x1 10 15\n";
    testInput(15, 10, aInput());
    cout << "9 x2 15\n";
    testInput(15, bInput(), 9);
    cout << "x1 x2 15\n";
    testInput(15, bInput(), aInput());
    cout << "x1 10 x3\n";
    testInput(cInput(), 10, aInput());
    cout << "9 x2 x3\n";
    testInput(cInput(), bInput(), 9);
    return 0;
}
