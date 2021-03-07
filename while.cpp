#include<iostream>

using namespace std;

string Fire(int a)
{
    string firing;
    if(a > 0)
    { firing = "Blam!"; }
    else { firing = "Clang!"; }
    return firing;
}

int main()
{
    int ammo = 20; 
    while(ammo >= 0)
    {
        cout << Fire(ammo) << endl;
        ammo--;
    }

    cout << endl << endl << endl;

    do 
    {
        cout << Fire(ammo) << endl;
        if(ammo > 0)
        {
            ammo--;
        }
    }
    while(ammo >= 0);

    return 0;
}
