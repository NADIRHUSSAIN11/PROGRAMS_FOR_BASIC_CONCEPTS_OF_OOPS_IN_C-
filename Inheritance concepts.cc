#include <iostream>
using namespace std;
class publication //BASE CLASS publication
{
public:
    string title;
    float price;

    void getdata() //getdata member function
    {
        cout << "PLEASE ENTER THE TITLE :" << endl;
        cin >> title;
        cout << "PLEASE ENTER THE PRICE :" << endl;
        cin >> price;
    }
    void putdata() //putdata member function
    {
        cout << "THE TITLE IS :" << title << endl;
        cout << "THE PRICE IS :" << price << " rupees" << endl;
    }
};
/////////////////////////////////////////////////////////////////

class book : public publication // derived class book
{
public:
    int count;

    void getdata()
    {
        publication::getdata(); //getdata overloaded member function
        cout << "PLEASE ENTER THE NUMBER OF PAGES:" << endl;
        cin >> count;
    }
    void putdata()
    {
        publication::putdata(); //putdata overloaded member function
        cout << "THE NUMBER OF THE PAGES IS:" << count << endl;
    }
};
//////////////////////////////////////////////////////////////////

class tape : public publication //derived class tape
{
public:
    float minutes;

    void getdata()
    {
        publication::getdata();
        cout << "ENTER THE PLAYING TIME IN MINUTES:" << endl;
        cin >> minutes;
    }
    void putdata()
    {
        publication::putdata();
        cout << "THE PLAYING TIME IN MINUTES IS:" << minutes << " minutes" << endl;
    }
};
///////////////////////////////////////////////////////////////////

int main()
{
    cout << "************************BOOK*************************" << endl;
    book b1;
    b1.getdata(); //calling getdata function for class book
    b1.putdata();
    cout << "************************TAPE*************************" << endl;
    tape t1;
    t1.getdata(); //calling getdata function for class tape
    t1.putdata();

    return 0;
}
