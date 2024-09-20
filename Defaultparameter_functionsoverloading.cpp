#include<stdio.h>
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
//default Parameters
void printAnimals(string name,int legs = 4){
    cout<<"a"<<name<<"has"<<legs<<endl;
}
double calculateTax(double price,double rate=0.825 ){
    return price*rate;
}
//functions Overloading
void animalSound(string name,string sound){
cout<<"the"<<name<<"says"<<sound<<endl;
}
void animalSound(string name){
    cout<<"the"<<name<<"don't speak"<<endl;
}
int main(){
    double tax,price=0;
  unsigned  char car ='N';
printAnimals("tigers");
printAnimals("sankes",0);
cout<<"enter the price:"<<endl;
cin>>price;
cout<<"is it a car?:(Y/N)??"<<endl;
cin>>car;
if(car == 'Y'){
    tax=calculateTax(price,0.635);
}
else{
 tax=calculateTax(price);
}
cout<<"the tax is:"<<tax<<endl;
cout<<"total:"<<price+tax<<endl;
animalSound("Dog","woof");
animalSound("fish");
animalSound("cat","meow");
animalSound("sail");
return 0;
}