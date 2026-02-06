#include<iostream>
using namespace std ;
int main(){
int  num ;
cout<<"enter the number " ;
cin>>num ;
for(int i=2;i<=num/2;i++){

    if(num<=1){
        cout<<"its not prime number" ;return 0;
    }

if(num%i==0){
    cout<<"it is not a prime number" ;
    return 0 ;
}else{ 
    cout<<"it is prime no" ;
    return 0;
}

}


}