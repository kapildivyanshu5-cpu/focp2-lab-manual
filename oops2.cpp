#include<iostream>
using namespace std ;
class rectangle{
    public:
    float length ;
    float width;
void inputdetails(){
cout<<"enter length ,width";
cin>>length>>width ;

} float area(){
return length*width;

}
};
int main(){
rectangle a1;
 a1.inputdetails();
cout<<a1.area();




}