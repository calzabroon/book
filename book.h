#pragma once
/*
Calum Brown
18366096
EE208 Lab 7
Excerise 4
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