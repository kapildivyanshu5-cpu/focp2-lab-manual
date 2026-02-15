#include<iostream>
using namespace std ;
bool isprime(int a){
if(a<=1){
    cout<<"it is not prime";return false;
}
for (int i=2;i<=a/2;i++){
if(a%i==0){
    
    return false ;
}
 return true ;
}
}
int main(){
int a;
cout<<"enter th number ";
cin>>a;
if(isprime(a)){
cout<<"prime";


}else cout<<"not prime";

}