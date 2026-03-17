#include<iostream>
#include<string>

using namespace std;
class Table{
public:
string material;
int price;
int legs;
Table(){
    material="wood";
    price=5000;
    legs=4;


}
Table(string Material,int Price,int Legs){
    material=Material;
    price=Price;
    legs=Legs;
}
Table(string Material,int Price){

    material=Material;
    price=Price;
    legs=4;

}
void display(){
    cout<<"material :"<<material<<endl<<"price :"<<price<<endl<<"legs : "<<legs ;
}
};
int main(){
Table a;
a.display();
Table b("plastic",3000,5);
b.display();

Table c("steel",4000);
c.display();
}