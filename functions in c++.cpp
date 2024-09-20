#include<iostream>
#include<string>
using namespace std;
const double SALES_TAX=0.825;
void printHell0(){
    cout<<"Hello World"<<endl;
}
string getUsername(){
    string name;
    cout<<"enter the name:"<<endl;
    getline(cin,name);
    return name;
}
double calculateTotal(int qty,double price){
double total;
total = qty*price;
total+=total*SALES_TAX;
return total;
}
void printTotaldue(double toal){
cout<<"the total is $"<<toal<<endl;
}
int getQty(string name){
    int qty;
    do{
         cout<<name<<"Enter THe widgets:"<<endl;
        cin>>qty;
    }while(qty<0);
    return qty;
}
int main(){
    string userName;
    int qty;
    double totalDue;
    printHell0();
    userName=getUsername();
    cout<<userName<<endl;
    qty = getQty(userName);
    //cout<<"how widgets you want:";
    //cin>>qty;
totalDue=calculateTotal(qty,4.99);
printTotaldue(totalDue);
//cout<<totalDue;
return 0;
}