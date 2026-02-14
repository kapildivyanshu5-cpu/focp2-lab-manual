#include<iostream>
using namespace std ;
int main(){
/*A grading system stores marks of multiple students in arrays. Implement a solution to accept 
marks in 5 subjects for 3 students, then display: 
• marks in 2nd subject of 1st student, and 
• marks in 5th subject of 3rd student. */
int arr[3][5];
for(int i=0;i<=2;i++){

    for(int j=0;j<=4;j++){
cout<<"enter the :"<<j+1<<"of row: "<<i+1;
cin>>arr[i][j];



    }cout<<endl;
}
cout<<arr[0][1]<<endl<<arr[2][4];
}