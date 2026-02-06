#include<iostream>
using namespace std ;
int main(){
int n ,sum=0 ;
cout<<"enter the number of enteries" ;
cin>>n ;
int arr[n] ;
for(int i =0;i<n;i++){
    cout<<"enter the "<<i+1<<"entry" ;
    cin>>arr[i] ;


}for(int i=0;i<n;i++){

if(arr[i]>sum){

sum=arr[i] ;

}


}cout<<"this is maximum entry"<<sum ;






}