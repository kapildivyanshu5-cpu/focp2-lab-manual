#include<iostream>
using namespace std ;
void swaap(int &m,int &n){
m=m+n;
n=m-n;
m=m-n;

}
void swap(int x,int y){//using call by value
x=x+y;
y=x-y;
x=x-y;
cout<<x<<endl<<y<<endl;

}
int main(){  
    int a=9;
    int b=4;
    swap(a,b);
    int c=6;
    int d=7;
    swaap(c,d);
    cout<<c<<endl<<d;
}
