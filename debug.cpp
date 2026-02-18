#include<iostream>
using namespace std ;

void computePerformance(int m[],int n){
    int max=m[0],min=m[0],avg=m[0];
    for(int i=1;i<n;i++){
        if (max<m[i])
        max=m[i];
        if(min>m[i])
        min=m[i];
        avg+=m[i];
    }
cout<<"\n min"<<min<<" max"<<max<<"avg"<<float(avg);
}