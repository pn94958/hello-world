#include<iostream>

using namespace std;

int main()
{
    /* 
        The function will use int, double, char, string and boolean variables.
        It will also use string.find(text, index), string.length(), string.substr(index, length) functions
        and will read and manipulate individual characters in string.
    */
   int number1;
   double number2;
   string text1; 
   string text2;
   char char1;
   char char2;

   number1 = 248747328;
   number2 = 194949.202490202203283281289003904390;

   text1 = "zdks;eslfekpepeopekUHRROOOORVVVVVVVVVDoepeopeopepekFrohRororororro!";
   
   char1 = text1[13];
   char2 = 'U';

    cout << text1 << " is " << text1.length() << " characters long.\n";
    text2 = text1.substr(5, 25);
    cout << number1 << " " << number2 << "..." << text2 << "!!!\n";
    cout << number2 << number2 << number2 << number2 << "!!!!!!!!\n";
    cout << text1.find("Heart", 25) << endl;
    text1[0] = char2;
    text1[4] = char1;
    cout << text1 << endl;
}
