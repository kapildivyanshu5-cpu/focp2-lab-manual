#include<iostream>
#include<string>
using namespace std;
/*2. Design a class Car that has attributes: brand and price. Write a constructor to assign values 
and create two objects to display the details of both cars. */
class Car{
    public:
    int price;
    string brand;
    Car(int p,string b){
        price=p;
        brand=b ;


    }void display(){

        cout<<"this is the price of car :"<<price<<endl<<"this is the brand :"<<brand<<endl;
    }
};
int main(){
Car a(30000,"BMW");
a.display();
Car b(40000,"TOYOTA");
b.display();


}