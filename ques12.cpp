 #include<iostream>
using namespace std ;
int main(){
int side1,side2,side3;
cout<<"enter the side 1 of triangle";
cin>>side1 ;
cout<<"enter the side 2of triangle" ;
cin>>side2 ;
cout<<"enter the sie 3 of triangle" ;
cin>>side3 ;
if(side1==side2&&side2==side3){
cout<<"its a equiliateral triangle";

}else if(side1==side2 || side2==side3||side1==side3){

    cout<<"its a isoceles triangle";

}else{
    cout<<"its a scalen triangle";
}







}