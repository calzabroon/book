/*
Calum Brown
18366096
EE208 Lab 7
Excerise 4
Test 1
*/

#include <iostream>
using namespace std;

class book {
protected:
    string title, author, publisher;
    int yearOfPub;
public:
    book();
    book(string, string = "", string = "", int = 0);
    void set_values(string, string = "", string = "", int = 0);
};

book::book() {
    title = "";
    author = "";
    publisher = "";
    yearOfPub = 0;
}

book::book(string a, string b, string c, int d) {
    title = a;
    author = b;
    publisher = c;
    yearOfPub = d;
}

void book::set_values(string a, string b, string c, int d) {
    title = a;
    author = b;
    publisher = c;
    yearOfPub = d;
    cout << "title: " << title << endl
        << "author: " << author << endl
        << "publisher: " << publisher << endl
        << "year of publish: " << yearOfPub << endl; // this is here to demostrate the code, not actually used in set value function
}

class library : public book {
    bool* on_loan; //true if book is on loan
public:
    void check_in() {
        *on_loan = false;
        cout << "book has been checked in " << *on_loan << endl;//cout is here to just demonstrate code, will be removed when code is not presented
    }
    void check_out() {
        *on_loan = true;
        cout << "book has been checked out " << *on_loan << endl;//cout is here to just demonstrate code, will be removed when code is not presented
    }
    library(bool a = true) {
        on_loan = new bool;
        *on_loan = a;
    }
};

