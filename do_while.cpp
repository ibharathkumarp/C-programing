#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    double amount,balance=0;
    int choice;
    do{
cout<<"$$ ATM MACHINE"<<endl;
cout<<"1)View Balance"<<endl;
cout<<"2)Deposit"<<endl;
cout<<"3)with draw"<<endl;
cout<<"4)quit"<<endl;
cout<<"Enter the selection:";

cin>> choice;
switch (choice)
{
case 1:
    cout<<"view balace:"<<balance;
    break;
case 2:
cout<<"how much balance:";
cin>>amount;
balance=balance+amount;
break;
case 3:
cout<<"how much withdrawal:";
cin>>amount;
if(balance-amount>=0){
    balance=balance-amount;
}
else {
    cout<< "insuffcient funds";
}
break;
case 4:
cout<<"good bye";
break;
default:
cout<<"good night";
    
}
}while(choice!= 4);

return 0;
}