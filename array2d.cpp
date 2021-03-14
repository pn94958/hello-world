#include<iostream>

using namespace std;

int main()
{   
    char level[5][5] = {
        { '.','.','.','.','.'},
        { '.','.','.','.','.'},
        { '.','.','.','.','.'},
        { '.','.','.','.','.'},
        { '.','.','.','.','.'}
    };
    level[2][1] = '%';
    level[2][2] = '@';
    level[2][3] = '%';
    level[3][3] = '%';
    level[3][2] = '%';
    level[3][1] = '%';
    level[1][1] = '%';
    level[1][2] = '%';
    level[1][3] = '%';

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
