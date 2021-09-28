#include <iostream>
using namespace std;

int power(int n, int p)//OVERLOADED POWER FUNCTION FOR INTEGER
{
    int result = 1;

    cout << n << "^" << p << " = ";

    while (p != 0)
    {
        result =result*n;
        --p;
    }

    cout << result<<endl;

    // for(int x=0;x<p;x++){
        
    //     result=result*n;

    // }
    // cout << n << "^" << p << " = ";
    // cout<< result;

    return 0;
}

float power(float n, int p)//OVERLOADED POWER FUNCTION FOR FLOAT
{
    int result = 1;

    cout << n << "^" << p << " = ";

    while (p != 0)
    {
        result *= n;
        --p;
    }

    cout << result;

    return 0;
}
double power(double n, int p)//OVERLOADED POWER FUNCTION FOR DOUBLE
{
    int result = 1;

    cout << n << "^" << p << " = ";

    while (p != 0)
    {
        result *= n;
        --p;
    }

    cout << result;

    return 0;
}

int main()
{
    cout << "INTERGER:" << endl;
    power(3, 4); // CALLED WITH INTEGER VALUES
    cout << endl;
    cout << "DOUBLE:" << endl;
    power(3344, 4); // CALLED WITH DOUBLE VALUES
    cout << endl;
    cout << "FLOAT:" << endl;
    power(33.3, 5); // CALLED WITH FLOAT VALUES

    return 0;
}
