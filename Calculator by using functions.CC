#include <iostream>
using namespace std;

class DM //CLASS DECLARATION
{
private:
    int meters; //DATA MEMBERS DECLARATION
    int centimeters;

public:
    void getdistance(void)// FUNCTION DECLARATION FOR INPUT
    {
        cout << "PUT THE VALUE OF DISTANCE IN CENTIMETERS:" << endl;
        cin >> centimeters;
        cout << "PUT THE VALUE OF DISTANCE IN METERS:" << endl;
        cin >> meters;
    }
    void showdistance(void)// FUNCTION DECLARATION FOR OUTPUT
    {
        cout << "THE DISTANCE IN CENTIMETERS IS\t:" << centimeters << " centimeters" << endl;
        cout << "THE DISTANCE IN METERS IS\t:" << meters << " meters" << endl;
    }
};

int main()
{
    DM OBJ1; //OBJECT DECLARATION
    OBJ1.getdistance();  // CALLING FUNCTION
    OBJ1.showdistance();

    return 0;
}