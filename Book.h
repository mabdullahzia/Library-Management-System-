#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;

class Book{
private:
    int id;
    string title,author,category;
    bool issued;
public:
    Book(int i,string t,string a,string c);
    void display() const;
    void issue();
    void returnBook();
    int getId() const{return id;}
    string getCategory() const{return category;}
    bool isIssued() const{return issued;}
};

#endif
