#include <iostream>

using namespace std;

int main()
{
    int age;
    string name;
    string surname;

    cout << "Write your age and press Enter:" << endl;
    cin  >> age;

    cout << "Write your name and press Enter:" << endl;
    // getline(cin, name); // captures enter from precious cin?
    cin >> name;
    cout << "Write your surname and press Enter:" << endl;
    // getline(cin, surname);
    cin >> surname;

    cout << "Your name is " << name << " " << surname << ".\n";
    cout << "You are " << age << " years old.\n";

    return 0;
}
