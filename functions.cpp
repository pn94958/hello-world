#include<iostream>

using namespace std;

void addTwo(int b, int a) // input is taken from right to left. Why?
{
    cout << a << " + " << b << " = " << a + b << endl;
}

int getNum1()
{
    int i;
    cout << "Input integer 1:\n";
    cin >> i;
    return i;
}

int getNum2()
{
    int i;
    cout << "Input integer 2:\n";
    cin >> i;
    return i;
}

string getstring()
{
    cout << "Input string:\n";
    cin.clear();
    string s;
    cin >> s;
    return s;
}

void Sentence(string c, string b, string a)
{
    cout << a << " " << b << " " << c << ".\n";
}

int main()
{   
    Sentence("numbers", "on", "Working");

    addTwo(3, 5);

    addTwo(getNum2(), getNum1());
    cout << endl;
    Sentence("words", "on", "Working");

    Sentence("sentence", "word", "Three");
    Sentence(getstring(), getstring(), getstring());

    return 0;
}
