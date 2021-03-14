#include<iostream>

using namespace std;

class Coordinates 
{
    public:
    int x;
    int y;
    Coordinates()
    {
        x = 0;
        y = 0;
    }

    Coordinates(int aX, int aY)
    {
        x = aX;
        y = aY;
    }
};

int main()
{
    Coordinates C1;
    cout << C1.x << "," << C1.y << endl;
    Coordinates C2(132, 105);
    cout << C2.x << "," << C2.y << endl;
    return 0;
}
