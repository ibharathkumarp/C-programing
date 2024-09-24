#include <stdio.h>
#include<iostream>
#include<string>
using namespace std;
class Train{
private:
   long int passengerPhone;
   string passengerName;
   char gender;
   int age;
   double ticketPrice;
public:
void setPassengerPhone(long int phone) {
        passengerPhone = phone;
    }

    // Getter for passengerPhone
    long int getPassengerPhone() {
        return passengerPhone;
    }

    // Setter for passengerName
    void setPassengerName(string name) {
        passengerName = name;
    }

    // Getter for passengerName
    string getPassengerName() {
        return passengerName;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Setter for gender
    void setGender(char g) {
        gender = g;
    }

    // Getter for gender
    char getGender() {
        return gender;
    }

    // Setter for ticketPrice
    void setTicketPrice(double price) {
        ticketPrice = price;
    }

    // Getter for ticketPrice
    double getTicketPrice() {
        return ticketPrice;
    }

 void getDetails(){
     std::cout << "Enter the Passenger phone no:" << std::endl;
     cin>>passengerPhone;
     cin.ignore();
     std::cout << "Enter the Passenger name:" << std::endl;
     getline(cin,passengerName);
      std::cout << "Enter the Passenger Age::" << std::endl;
      cin>>age;
    std::cout << "Enter the Gender(M/F)::" << std::endl;
     cin>>gender;
    cout<<"Enter the Ticket Price (In dollars):"<<endl;
     cin>>ticketPrice;
 }
 double calculateAmount(){
     double finalPrice = ticketPrice;
        if (age < 16) {
            finalPrice *= 0.5; // 50% discount for children
        } else if (age >= 60) {
            finalPrice *= 0.75; // 25% discount for senior citizens
        } else if (gender == 'F' || gender == 'f') {
            finalPrice *= 0.9; // 10% discount for females
        }
        return finalPrice;
 }
 void display(){
     int cal_total=calculateAmount();
    cout<<"the total amount is:"<<cal_total<<endl; 
 }
 
 
};
int main()
{
    Train t1;
    t1.getDetails();
    t1.display();

    return 0;
}
