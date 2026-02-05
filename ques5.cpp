#include<iostream>
using namespace std ;
int main(){
int itemno;
float bill,unitprice,quantity;
cout<<"enter the item no";
cin>>itemno ;
cout<<"enter the quantity";
cin>>quantity ;
cout<<"enter the unit price";
cin>>unitprice ;
bill=quantity*unitprice ;
cout<<"thus is bill without disscount :"<<bill<<endl ;
float dbill=bill*(2.0/10);
cout<<"this is your disscounted bill :"<<dbill ;



}