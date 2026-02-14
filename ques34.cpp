#include<iostream>
using namespace std ;
/*. A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two 
3×3 matrices and compute their sum.*/
int main(){
int arr1[3][3];
int arr2[3][3];
int sum[3][3];
for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){
cout<<"enter "<<j+1<<" element off "<<i+1<< " row of matrix";
cin>>arr1[i][j];
    }cout<<endl;
}
for(int i=0;i<3;i++){

    for(int j=0; j<3;j++){
cout<<"enter "<<j+1<<" element off "<<i+1<< " row of matrix";
cin>>arr2[i][j];
    }cout<<endl;
}for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
sum[i][j]=arr1[i][j]+arr2[i][j];
cout<<" "<<sum[i][j];

}cout<<endl;

}
}