#include<iostream>
#include"Library.h"
using namespace std;

int main(){
    Library l; int choice;
    do{
        cout<<"1.Add 2.DisplayAll 3.ByCat 4.Issue 5.Return 0.Exit:";cin>>choice;
        switch(choice){
            case 1:l.addBook();break;
            case 2:l.displayAll();break;
            case 3:{
                string c; cin.ignore(); cout<<"Category:";getline(cin,c);
                l.displayByCategory(c);break;
            }
            case 4:{int id; cout<<"ID:";cin>>id;l.issueBook(id);break;}
            case 5:{int id; cout<<"ID:";cin>>id;l.returnBook(id);break;}
        }
    }while(choice!=0);
}
