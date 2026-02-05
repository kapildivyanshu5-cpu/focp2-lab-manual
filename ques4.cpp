#include<iostream>
#include <string>
using namespace std;
int main(){

string temp1 ;
cout<<"temp is in" ;
getline(cin,temp1);


float temp;
cout<<"enter th temp";
cin>>temp ;
if(string(temp1)=="celsius"){
    float t=(9/5)*temp+32;
    cout<<"this is temp in faranehit"<<t ;
}else if(string(temp1)=="fahrenheit"){

float t=(5/9)*(temp-32);
cout<<"this is temp in celseius : "<<t ;
}
}