#include<iostream>
using namespace std;
int main(){
/*A manufacturing QC system checks defect codes divisible by both 3 and 5. 
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5. */
int arr[5];
int c=0;
for(int i=0;i<5;i++){

    cout<<"enter the "<<i+1<<"element of the array";
    cin>>arr[i];
}
for(int i=0;i<5;i++){
if(arr[i]%3==0 &&arr[i]%5==0){
c++;

}

}cout<<c;
}