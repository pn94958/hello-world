#include<iostream>

using namespace std;

int main()
{   
    char level[5][5];

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++) 
        {
            level[i][j] = '.';
        }
    }

    level[2][2] = '@';

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++) 
        {
            cout << level[i][j];
        }
        cout << endl;
    }

        for(int i = 1; i < 4; i++)
    {
        for(int j = 1; j < 4; j++) 
        {
            if(i != 2 || j !=2)
            { level[i][j] = 'g'; }
            else
            { level[i][j] = '@'; }
        }
    }

    cout << endl;

        for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++) 
        {
            cout << level[i][j];
        }
        cout << endl;
    }

            for(int i = 1; i < 4; i++)
    {
        for(int j = 1; j < 4; j++) 
        {
            if(i != 2 || j !=2)
            { level[i][j] = '*'; }
            else
            { level[i][j] = '@'; }
        }
    }

    cout << endl;

        for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++) 
        {
            cout << level[i][j];
        }
        cout << endl;
    }

            for(int i = 1; i < 4; i++)
    {
        for(int j = 1; j < 4; j++) 
        {
            if(i != 2 || j !=2)
            { level[i][j] = '%'; }
            else
            { level[i][j] = '@'; }
        }
    }

    cout << endl;

        for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++) 
        {
            cout << level[i][j];
        }
        cout << endl;
    }
    return 0;


}
