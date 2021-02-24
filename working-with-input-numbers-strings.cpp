#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double number1;
    cout << "Enter a decimal number: \n";
    cin >> number1;
    cin.ignore();
    double number1a;
    number1a = number1;
    
    string text1;
    cout << "Enter a string: \n";
    getline(cin, text1);
    
    double number2;
    cout << "Enter another decimal number: \n";
    cin >> number2;
    cout <<"Thank you for your input.\n";
    cout << text1 << endl;
    cout << fmax(number1, number2) << " is smaller than " << fmin(number1, number2) << ".\n";
    cout << endl;

    cout << "gowowwjf;fjdf!!!!!!!\n";
    cout << endl;
    cout << text1 << number1 << "!!!!!!!!\n";
    cout << endl;
    number1 = sqrt(number1);
    cout << text1[0] << sqrt(number1) << "!!!!!!!!\n";
    cout << endl;
    cout << text1[text1.length() - 1] << number1++ << "!!!!!!!!\n";
    cout << endl;
    number1 = pow(number1, 12);
    cout << text1[text1.length() / 2] << number1 << "!!!!!!!!\n";
    cout << endl;
    
    int number3;
    int a;
    a = ceil(number1);
    int b;
    b = floor(number2);
    number3 = (a % b) + round(number2); // can't use ceil/floor in modulo for some reason. Weird, they should produce an int?
    // checked it. They produce a double. Weird.
    
    cout << number3 << endl;
    cout << endl;
    text1[text1.length() /2] = 'X';
    text1 = text1.substr((text1.length() /2), (text1.length() - 1));
    
    cout << "!!!!!!!\n";
    cout << text1 << endl;
    cout << number1 << endl;
    cout << number2 << endl;
    cout << number3 << endl;
    cout << number1a << endl;
    cout << fmin(number1, fmin(number1a, fmin(number2, number3))) << endl;
    cout << "!!!!@!GKLKDFFKJRJIOREJIWEIOEDKD;KLD;LD;KLDE!!!!!!!!!!!" << endl;
        
    return 0;
}
