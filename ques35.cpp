#include<iostream>
using namespace std;
int main(){
/* A data analytics tool flips rows and columns for better visualization. Implement a solution to 
store a 3×3 matrix and compute its transpose. */
int arr[3][3];
int transpose[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"enter the "<<j+1<<" element of the row "<<i+1;
        cin>>arr[i][j];

    }cout<<endl;
}for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        transpose[i][j]=arr[j][i];
        cout<<transpose[i][j];
    }cout<<endl;
}

}