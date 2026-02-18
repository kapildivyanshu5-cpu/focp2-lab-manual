#include<iostream>
using namespace std;
class student{
public:
string name;
int roolno;
int marks1;
int marks2 ;
int marks3;
void inputdetails(){
cout<<"enter the rool no,name,marks1,marks2,marks3";
cin>>roolno>>name>>marks1>>marks2>>marks3;
}
void displayDetails(){
    cout<<"rool no:"<<roolno<<endl<<"marks1"<<marks1<<endl<<"marks2:"<<marks2<<endl<<"marks3:"<<marks3<<endl ;
}
void calculatetotal(){
int total=marks1+marks2+marks3 ;
cout<<"this the total marks"<<total;

}



};
int main(){
    student s1;
   s1.inputdetails();
   s1.displayDetails();
   s1.calculatetotal();

}