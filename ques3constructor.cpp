#include<iostream>
#include<iostream>
using namespace std;
class Vehicle{
public :
string no;
string type;
string ownername ;
int fee;
Vehicle(){

no="not assigneed";
ownername = "Unknown"; 
type ="General" ;
fee = 0;

}Vehicle(string vno,string name){
no=vno;
ownername=name;
fee = 0;
type ="General" ;

}Vehicle(string vno,string name,int r,string t){
no=vno;
ownername=name;
fee = r;
type =t ;}
void display(){

cout<<"this is vehicle no"<<no<<endl<<"this is owner name"<<ownername<<endl<<"this is registration fee"<<fee<<endl<<"this is type"<<type;

}

};
int main(){
Vehicle a;
a.display();
Vehicle b("HR26CT7236","MR Divyanshu");
b.display();
Vehicle c("HR26CT7246","MR Himanshu",23000,"two weheler");
c.display();

}