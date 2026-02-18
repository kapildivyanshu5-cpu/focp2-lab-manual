#include<iostream>
using namespace std ;
class car{
public:
string brand;
float price;
int make;
string colour;

void input_info (){
cout<<"enter brand ,price, make ,colour:";
cin>>brand>>price>>make>>colour;
}
void display_info(){
cout<<"brand :"<<brand<<endl<<"price:"<<price<<endl<<"make:"<<make<<endl<<"colour:"<<colour;
}
};

int main(){
    car c3;
    c3.input_info();
    c3.display_info();




}