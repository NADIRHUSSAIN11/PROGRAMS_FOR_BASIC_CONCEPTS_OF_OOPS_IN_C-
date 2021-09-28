#include <iostream>
using namespace std;
class concatenate
{
public:
    string constring;

public:
    concatenate() {}
    concatenate(string st) // constructor
    {
        constring = st;
    }

    void get()
    {
        cout << constring << endl;
    }
};

concatenate operator+(concatenate s1, concatenate s2) // operator overloading
{
    concatenate s;
    s.constring = s1.constring + s2.constring;
    return s;
}

int main()
{
    concatenate s1("NADIR"); //delaring object
    concatenate s2("HUSSAIN");
    concatenate s3 = s1 + s2;
    s3.get(); // calling object
    return 0;
}