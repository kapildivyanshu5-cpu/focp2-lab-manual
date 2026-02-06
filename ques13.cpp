#include<iostream>
#include<cmath>
using namespace std ;
int main(){
double a,b,c,d;
double root1,root2;
cout<<"enter the cofficients :a,b,c";
cin>>a>>b>>c ;
d=b*b-4*a*c ;
if(d>0){
root1=(-b+sqrt(d))/(2*a );
cout<<"this is root1 :"<<root1<<endl ;
root2=(-b-sqrt(d))/(a*2 );
cout<<"this is root2 :"<<root2;
}else if(d==0){

    root1=(-b/2*a);
    cout<<"this is the root of the your equations : "<<root1 ;

}else{ cout<<"coroots are not nreal its imaginary";}






}