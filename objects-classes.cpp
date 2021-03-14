#include<iostream>

using namespace std;

class Book {
    public:
    string title;
    string author;
    int year;
};

int main()
{
    Book book1;
    book1.title = "1984";
    book1.author = "George Orwell";
    book1.year = 1948;
    cout << "Book 1 is " << book1.title << " written by " << book1.author << " and published in " << book1.year << ".\n";
    return 0;
}
