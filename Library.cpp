#include"Library.h"
#include<iostream>
using namespace std;

// Book methods
Book::Book(int i,string t,string a,string c){id=i;title=t;author=a;category=c;issued=false;}
void Book::display() const{
    cout<<"ID:"<<id<<" "<<title<<" "<<author<<" Cat:"<<category
        <<" Status:"<<(issued?"Issued":"Available")<<"\n";
}
void Book::issue(){issued=true;}
void Book::returnBook(){issued=false;}

// Library methods
void Library::addBook(){
    string t,a,c; cin.ignore();
    cout<<"Title:";getline(cin,t);
    cout<<"Author:";getline(cin,a);
    cout<<"Category:";getline(cin,c);
    Book b(bookCounter++,t,a,c);
    books.push_back(b);
}

void Library::displayAll(){
    for(auto &b:books) b.display();
}

void Library::displayByCategory(const string &cat){
    for(auto &b:books) if(b.getCategory()==cat) b.display();
}

void Library::issueBook(int id){
    for(auto &b:books) if(b.getId()==id){
        if(b.isIssued()) cout<<"Already issued\n"; else b.issue(); return;
    }
    cout<<"Book not found\n";
}

void Library::returnBook(int id){
    for(auto &b:books) if(b.getId()==id){
        if(!b.isIssued()) cout<<"Not issued\n"; else b.returnBook(); return;
    }
    cout<<"Book not found\n";
}
