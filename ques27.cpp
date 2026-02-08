#include<iostream>
using namespace std ;
int main(){
/* supermarket software maintains item price lists. Implement a solution to store the prices of 10 
items in an array and display the maximum price.*/
int  arr[10];
int n;
int i;
int max=0 ;
for( i=0;i<10;i++){


    cout<<"enter the price of "<<i+1<<"item";
    cin>>arr[i];

}
for(i=0;i<10;i++){
if(arr[i]>max){
 
    max=arr[i];
   n=i+1;
}


}cout<<"product no: "<<n<<endl<<"has the maximum price which  is: " <<max;


}