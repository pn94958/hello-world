#include<iostream>

using namespace std;

int main()
{
    char level[] = { '.','.','.','@','%','g','g','.','.','.' };
    for(int i = 0; i < 10; i++)
    {
        cout << level[i];
    }
    cout << endl;
    return 0;
}
