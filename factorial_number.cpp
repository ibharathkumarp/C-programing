#include<iostream>
using namespace std;
int main(){
    int number;
    int factorial=1;
    cout<<"number:"<<endl;
    cin>> number;
      for(int i=number;i>=1;i--){
            factorial=factorial*i;
    
      }
      cout<<"factorial="<<factorial<<endl;
}