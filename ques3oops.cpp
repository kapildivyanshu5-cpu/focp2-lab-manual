#include <iostream>
using namespace std;
class bankaccount{
public:
	string accountHolderName;
	int accountnumber;
	double balance;
void inputdetails(){
cout<<"enter the accountholdername,account number,balaance";
cin>>accountHolderName>>accountnumber>>balance;

 
}
void displaydetails(){


cout<<"account holfder name is :"<<accountHolderName<<endl<<"account number: accountHolderName"
;}


};
int main(){
bankaccount account1;
account1.inputdetails();
account1.displaydetails();

}