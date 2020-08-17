#include <iostream>>
using namespace std;
int Calage(int);

int yearscout;
int age;
int thisyear = 2563;
int youryear;

int main ()
{
    cout<<"Enter number of people : ";
    cin>>yearscout;
    cout<<"================================================================================"<<endl;
    for(int n=1;n<=yearscout;n++)
        {
          cout<<"Enter year"<< n <<":";
          cin>> youryear;
          cout<<"Age"<<n<<":"<<Calage(youryear)<<endl;

        }
    cout << endl << "Thank you." << endl;

    return 0;
}
int Calage(int youryear)
{
    age = thisyear-youryear;

    return age;


}

