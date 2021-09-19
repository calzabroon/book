/*
Calum Brown
18366096
EE208 Lab 7
Excerise 4
*/

#include <iostream>
#include "book.h"
using namespace std;



int main() {
    library myBook(true);
    myBook.set_values("book", "bob", "penguin", 2020);
    myBook.check_in();
    myBook.check_out();
}