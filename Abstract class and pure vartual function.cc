#include <iostream>
#include <windows.h>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////
class shape // ABSTRACT BASE CLASS
{
public:
    double a;
    double b;

public:
    void getdata();
    virtual void displayarea()=0; //PURE VIRTUAL FUNCTION
};

/////////////////////////////////////////////////////////////////////////////////

class triangle : public shape //DERIVED CLASS TRIANGLE
{
public:
    void getdata()
    {
    	cout<<"********************(CLASS TRIANGLE)********************************\n"<<endl;
        cout << "PUT THE VALUE OF THE BASE OF THE TRIANGLE: " << endl;
        cin >> a;
        cout << "PUT THE VALUE OF THE HEIGHT OF THE TRIANGLE: " << endl;
        cin >> b;
    }
    void displayarea() // REDEFINED VIRTUAL FUNCTION
    {
        cout << "THE AREA OF THE TRIANGLE IS: " << (a * b) / 2 << " square unit\n" << endl;
    }
};

//////////////////////////////////////////////////////////////////////////////////

class rectangle : public shape //DERIVED CLASS REACTANGLE
{
public:
    void getdata()
    {
    	cout<<"********************(CLASS RECTANGLE)******************************\n"<<endl;
        cout << "PUT THE VALUE OF THE WIDTH OF RECTANGLE: " << endl;
        cin >> a;
        cout << "PUT THE VALUE OF THE LENGTH OF RECTANGLE: " << endl;
        cin >> b;
    }
    void displayarea() // REDEFINED VIRTUAL FUNCTION
    {
        cout << "THE AREA OF THE RECTANGLE IS: " << (a * b) << " square units\n" << endl;
        cout<<"********************************************************************\n"<<endl;
    }
};

/////////////////////////////////////////////////////////////////////////////////

int main()
{
	
    triangle t1;   // MAKING OBJECT OF TRIANGLE
    triangle* ptr1;// MAKING POINTER OF TRIANGLE
    ptr1=&t1;
    ptr1->getdata();
    ptr1->displayarea();

    rectangle r1;// MAKING OBJECT OF RECTANGLE
    rectangle*ptr2; r1;// MAKING POINTER OF RECTANGLE
    ptr2=&r1;
    ptr2->getdata();
    ptr2->displayarea();


    return 0;
}
////////////////////////////////////////////////////////////////////////////////////

