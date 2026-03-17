#include<iostream>
#include<string>
using namespace std ;
class Mobile{
    public:
string brand;
int price ;
int storage;
Mobile(string Brand){
    brand=Brand ;
     price=0; 
storage=0;
     
}

Mobile(string Brand,int Price){
    brand=Brand ;
    price=Price; 
storage=0;
}
Mobile(string Brand,int Price,int Storage){
    brand=Brand ;
    price=Price; 
    storage=Storage;
}
void display(){
cout<<"this is brand :"<<brand<<endl<<"this is price"<<price<<endl<<"this is s price"<<price ; 

}
};
int main(){

Mobile a("samsung");
a.display();
Mobile b("apple",70000);
b.display();
Mobile c("oneplus",25000,256);
c.display();



}