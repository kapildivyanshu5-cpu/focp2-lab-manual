#include<iostream>
#include<cmath>
using namespace std ;
int main(){
int a,d=0,b ;
int n;
cout<<"enter the number ";
cin>>n ;
for(int i=1;i<n;i++){
    if(n%i==0){
        b=i+b ;
    }

}if(b==n){

    cout<<"this is perfect number";

}
else cout<<"its not perfect number" ;


}