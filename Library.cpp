#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
    public:
        string title;
        string author;
        bool isBorrowed;
        void borrowBook()
        {
            if (isBorrowed == true)
            {
                cout << "This Book has been borrowed" << endl;
            }
            else
            {
                isBorrowed = true;
            }
        }
        void returnBook()
        {
            if (isBorrowed == false)
            {
                cout << "This Book is already in the library" << endl;
                return;
            }
            isBorrowed = false;
        }
        void displayBookInfo()
        {
            cout << title << ": " << author << " " << isBorrowed << endl;
        }
};

int main()
{
    LibraryBook NewBook;
    NewBook.title = "Book";
    NewBook.author = "BookAuthor";
    NewBook.isBorrowed = false;
    NewBook.borrowBook();
    NewBook.borrowBook();
    NewBook.returnBook();
    NewBook.returnBook();
    NewBook.displayBookInfo();
}