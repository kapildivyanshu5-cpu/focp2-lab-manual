#include<iostream>
using namespace std ;
int main(){
float a,b,result ;
char op ;
cout<<"enter the operator";
cin>>op ;
cout<<"enter the operends";
cin>>a>>b ;
if(op=='+'){
result=a+b ;
cout<<"this is the result :"<<result ;


}else if(op=='-'){
result=a-b ;
cout<<"this is the result :"<<result;



}else if(op=='*'){

    result=a*b;
    cout<<"this is the result :"<<result ;

}else if(op=='/'){

result=a/b ;
cout<<"this is the result"<<result;


}else cout<<"invalid action";











}