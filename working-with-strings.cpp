#include<iostream>
using namespace std;

int main()
{
    string phrase1;
    phrase1 = "Bob";
    cout << phrase1 << " has " << phrase1.length() << " letters.\n";
    cout << "The first letter is " << phrase1[0] << ", the last letter is " << phrase1[2] << endl;

    string phrase2;
    phrase2 = phrase1;

    cout << "The second phrase is " << phrase2 << ".\n";
    phrase2[0] = 'R';
    cout << "The modified second phrase is " << phrase2 << ".\n";

    string phrase3;
    phrase3 = "Robert";
    cout << "The middle of the name of " << phrase3 << " is " << phrase3.substr(1, 4) << ".\n";
    cout << "bert in " << phrase3 << " is on " << phrase3.find("bert", 0) << " index.\n";
    cout << "zurg in " << phrase3 << " is on " << phrase3.find("zurg", 0) << " index.\n";

    return 0;
}
