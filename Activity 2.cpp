#include <iostream>
#include <string>
using namespace std;

class Book {
  public:
    string title, author;
    double price;
    
    void displayDetails() {
      cout << "Book details: " << endl;
      cout << "Title: " << title << endl;
      cout << "Author: " << author << endl;
      cout << "Price: $" << price << endl << endl;
    }
};

int main() 
{
    Book book1;
    book1.title = "One Hundred Years of Solitude";
    book1.author = "Gabriel García Márquez";
    book1.price = 9.99;
    book1.displayDetails();
    
    Book book2;
    book2.title = "Great Expectations";
    book2.author = "Charles Dickens";
    book2.price = 15.00;
    book2.displayDetails();
    return 0;
}