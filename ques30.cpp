#include<iostream>
using namespace std;
int main(){
/*. A payroll system maintains employee salary records. Implement a solution to accept salary of 
10 employees in an array, compute total salary and average salary, then display the result. */
int arr[10];
int sum=0,average;

for(int i=0;i<=9;i++){
cout<<"enter salary of "<<i+1<<" employe";
cin>>arr[i];

}for(int i=0;i<=9;i++){
sum=sum+arr[i];

}
cout<<"this is the total salries of 10 employes :"<<sum;
average=sum/10;
cout<<"this the average of salries: "<<average;
}