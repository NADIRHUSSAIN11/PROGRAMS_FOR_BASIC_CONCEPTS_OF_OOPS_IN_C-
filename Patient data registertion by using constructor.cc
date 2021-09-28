#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////
class patientdata// CLASS FOR PATIENT DATA
{

private:
    string nameOfpatient;
    string dateofadmission;
    string disease;
    string dateOfdischarge;
    int count;

public:
//////////////////////////////////////////////////////////////////////////////
    patientdata() // CONSTRUCTOR
    {
        count = 1; //COUNTER
    }
/////////////////////////////////////////////////////////////////////////////
void Countpatient()
{
    cout << "________________________________________________________" << endl;
    cout << "PATIENT NO:" << count++ << endl;
    cout << "________________________________________________________" << endl;
}
//////////////////////////////////////////////////////////////////////////////
    void getdata() //FUNCTION TO GET THE DATA OF PATIENT
    {
        cout << "ENTER THE NAME OF THE PATIENT:" << endl;
        getline(cin,nameOfpatient);
        cout << "ENTER THE DATE OF ADMISSION:" << endl;
        getline(cin, dateofadmission);
        cout << "ENTER THE NAME OF DISEASE:" << endl;
        getline(cin, disease);
        cout << "ENTER THE DATE OF DISCHARGE:" << endl;
        getline(cin, dateOfdischarge);
    }
//////////////////////////////////////////////////////////////////////////////
    void showdata() //FUNCTION TO SHOW THE DATA OF PATIENT 
    {

        cout << "THE NAME OF THE PATIENT IS  :" << nameOfpatient << endl;
        cout << "THE DATE OF THE ADMISSION IS:" << dateofadmission << endl;
        cout << "THE NAME OF THE DISEASE IS  :" << disease << endl;
        cout << "THE DATE OF DISCHARGE IS    :" << dateOfdischarge << endl;
        
        cout << "________________________________________________________" << endl;
    }
};
///////////////////////////////////////////////////////////////////////////////
class age : public patientdata // INHERITANCE OF CLASS AGE FROM PATIENTDATA CLASS
{
private:
    int ageofpatient;

public:
////////////////////////////////////////////////////////////////////////////////
    void agepatient() // FUNCTION TO GET AND SHOW AGE OF THE PATIENT 
    {

        cout << "ENTER THE AGE OF THE PATIENT:" << endl;
        cin >> ageofpatient;
        cout << "________________________________________________________" << endl;
        cout << "THE AGE OF THE PATIENT IS   :" << ageofpatient << endl;
    }
};
/////////////////////////////////////////////////////////////////////////////////
int main()
{

    age P1,P2,COUNT; //CREATING OPJECT OF THE CLASS
    COUNT.Countpatient();//COUNTER
    P1.getdata(); // CALLING FOR GETTING DATA OF PATEINT 1
    P1.agepatient();
    P1.showdata();

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////

