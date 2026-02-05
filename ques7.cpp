#include <iostream>
using namespace std;

int main(){


int score1,score2,score3;
cout<<"enter the score  of player 1";
cin>>score1 ;
cout<<"enter the score of player 2";
cin>>score2 ;
cout<<"enter the score of player 3" ;
cin>>score3 ;
if(score1>score2&&score1>score3){
    cout<<"player one is winner with the score :"<<score1;

}else if(score2>score3){

    cout<<"player two is winner with the score :"<<score2;
}
else if(score3>score2){

    cout<<"player three is winner with the score :"<<score3;
}
else{
    cout<<"match is tied" ;
}

}