#include<iostream>
#include<string>
using namespace std ;
class Book{
public:
string Title;
string author;
double price;
void inputDetails(){
    cout<<"enter the name of book"<<enl;
    getline(cin,Title);
    cout<<"enter the name of author";
    getline(cin,author);
} void displayDetails(){

    cout<<"this the ame of book :"<<Title<<endl;
    cout<<"this the name of author :"<<author<<endl ;
}
};

int main(){

Book b1;
b1.inputDetails();
b1.displayDetails();


}