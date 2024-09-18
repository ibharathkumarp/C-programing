#include<iostream>
using namespace std;
int main(){
    int userPin=123,errorCounter=0;
    int pin;
    do{
        cout<<"pin"<<endl;
        cin>>pin;
        if(pin != userPin){
             errorCounter++;
        }

    }while(errorCounter<3 && pin!=userPin);
        
    if(errorCounter<3){
            cout<<"Loading...."<<endl;
        }
    else{
        cout<<"Blocked....";
    }
}
