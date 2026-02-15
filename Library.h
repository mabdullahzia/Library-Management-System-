#ifndef LIBRARY_H
#define LIBRARY_H
#include"Book.h"
#include<vector>
using namespace std;

class Library{
private:
    vector<Book> books;
    int bookCounter;
public:
    Library(){bookCounter=101;}
    void addBook();
    void displayAll();
    void displayByCategory(const string &cat);
    void issueBook(int id);
    void returnBook(int id);
};

#endif
