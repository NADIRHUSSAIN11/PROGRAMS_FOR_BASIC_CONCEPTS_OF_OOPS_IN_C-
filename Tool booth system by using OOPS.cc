#include <iostream>
using namespace std;

class tollBooth
{
private:
    int totalCars; //DATA MEMEBER
    double totalCash;       //DATA MEMBER
public:                     //NO ARGUMENT CONSTRUCTOR
    tollBooth()
    {
        totalCars=0;
        totalCash=0.0;
    }
    void payingCar() //FUNCTION FOR PAYING CAR
    {
        totalCars++;
        totalCash =totalCash+0.50;
    }
    void display() const //FUNCTION FOR DISPLAYING 
    {
        cout<<"TOTAL CARS ARE:"<<totalCars<<endl;
        cout<<"THE TOTAL CASH IS:"<<totalCash<<endl;
    }
};

int main(){

tollBooth CAR;   //OBJECTS
CAR.payingCar();
CAR.payingCar();
CAR.display();

return 0;
}