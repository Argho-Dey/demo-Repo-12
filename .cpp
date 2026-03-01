/*1. Write a C++ program to define a structure “BOOK” to represent a book with data members ‘Title’,
‘Author’, ’Price’, and member function to display book details and calculate the discounted price. */


#include <iostream>
#include <string>
using namespace std;

struct Book
{
    string Title;
    string Author;
    double Price;

    void displayDetails()
    {
        cout << "Title: " << Title << endl;
        cout << "Author: " << Author << endl;
        cout << "Price: $" << Price << endl;
    }


    double c_Discount(double discountPercent)
    {
        double discount = Price * discountPercent / 100;
        return Price - discount;
    }
};

int main()
{
    Book book1;


    cout << "Enter book title: ";
     cin>>book1.Title;
    cout << "Enter book author: ";
    cin>> book1.Author;
    cout << "Enter book price: ";
    cin >> book1.Price;


    cout << "\nBook Details:" << endl;
    book1.displayDetails();


    double discountPercent;
    cout << "\nEnter discount percentage: ";
    cin >> discountPercent;

    double discountedPrice = book1.c_Discount(discountPercent);
    cout << "\nDiscounted Price (" << discountPercent << "% off): $" << discountedPrice << endl;

    return 0;
}

