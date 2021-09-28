#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////

class father //base class father
{
protected:
    int age;

public:
    father(int x) // contruction of base class 
    {
        age = x;
    }
    virtual void iam()
    {
        cout << "I AM FATHER, my age is :" << age << endl;
    }
};
///////////////////////////////////////////////////////////////

class son : public father //derived class son
{
public:
    son(int x):father(x){}; // overloading contructor of base class
    void iam()
    {
        cout << "I AM SON, my age is :" << age << endl;
    }
};
/////////////////////////////////////////////////////////////////

class daughter : public father //derived class daughter
{
public:
    daughter(int x):father(x){}; // overloading contructor of base class
    void iam()
    {
        cout << "I AM DAUGHTER, my age is :" << age << endl;
    }
};
/////////////////////////////////////////////////////////////////
int main()
{
son S1(12);
daughter D1(20);
father* pointer; // making pointer for base class
pointer= &S1;    // storing the address of object S1
pointer->iam();  // calling function iam() through pointer
pointer= &D1;    // storing the address of object D1
pointer->iam();  // calling function iam() through pointer
return 0;
}
