#include<iostream>
#include<stdio.h>
using namespace std;
void catFunction(){
    int cats = 3;
    cout<<cats<<endl;
}
void flowerScope(){
int flowers = 10;
cout<<flowers<<endl;
for (int i = 0; i < 5; i++)
{
    int flowers = 100;
    flowers*=2;
cout<<flowers;
}
cout<<"the flowers"<<flowers<<endl;
}
int main(){
    int cats =4;
    cout<<"main:";
    catFunction();
    flowerScope();
    return 0;
}