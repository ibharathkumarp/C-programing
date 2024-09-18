#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int max;
    const int periods=4;
    int sales[periods];
    int newsales[periods];
// intialization of an array
for (int i = 0; i < periods; i++)
{
    sales[i]=0;
}
// enter the array from user end
for (int i = 0; i < periods; i++)
{
    cout<<"enter the arrary:";
    cin>>sales[i];
}
// display the array
 cout<<" the sales array:"<<endl;
for (int i = 0; i < periods; i++)
{
   // cout<<" the arrary is:"<<endl;
    cout<<sales[i]<<endl;
    
}
max = sales[0];
for (int i = 0; i < periods; i++)
{
    if(sales[i]>max){
        max=sales[i];
    }
           
}
cout<<"the largest value is:"<<max<<endl;
for (int i = 0; i < periods; i++)
{
   newsales[i] = sales[i];
}
for (int i = 0; i < periods; i++)
{
    cout<<newsales[i]<<endl;
}
cout<<"printing the array in the backward:"<<endl;
for (int i = periods-1; i >= 0; i--)
{
    cout<<sales[i]<<endl;
}
return 0;
}