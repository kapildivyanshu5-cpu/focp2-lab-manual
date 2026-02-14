#include<iostream>
using namespace std ;
int main(){


/*A data processing system classifies even and odd inputs separately. Implement a solution to 
store 5 elements in an array, compute sum of all even and sum of all odd numbers.*/  
int arr[5];
int sum=0;
int sumodd=0;
for(int i=0;i<5;i++){
cout<<"enter the element"<<endl;
cin>>arr[i];


}for(int i=0;i<5;i++){
if(arr[i]%2==0){
sum=arr[i]+sum;

}else if(arr[i]!=0){
    sumodd=arr[i]+sumodd;
  

}

}
cout<<"this is the sum of all even number : "<<sum<<endl;
cout<<"this is the sum of all odd number"<<sumodd;

}