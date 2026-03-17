#include<iostream>
#include<string>
using namespace std ;
class Temprature{
    public:
float celsius;
float fahrenheit;
void inputTemprature(){
cout<<"enter temprature in celsius";
cin>>celsius ;


}float convertToFaherenheit(){
fahrenheit=(9.0/5)*celsius+32;

}void displayResult(){
 cout<<"this is the temprature in fahrenheit: "<<fahrenheit;
}


};
int main(){
Temprature t1;
t1.inputTemprature();
t1.convertToFaherenheit();
t1.displayResult();
return 0 ;
}