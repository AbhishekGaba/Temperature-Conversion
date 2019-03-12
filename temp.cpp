// Abhishek Gaba
// lab 7 temp converter




#include <iostream>
using namespace std;

double C(double f);
double F(double c);

int main()

{

    int option;
    double c;
    double f;
    char another;

    cout << "Hi, would you like to convert from Celsius to Fahrenheit or Fahrenheit to Celsius. Enter 1 for the first case and 2 for the second" << endl;
    cin >> option;
    
    
    switch (option) {
        case 1:
            cout << "You chose to convert from Celsius to Fahrenheit " << endl;
            break;
        case 2:
            cout << "You chose to convert from Fahrenheit to Celsius" << endl;
            break; }

    if ( option == 1 )
    {   cout << "Enter the temperature in Celsius " << endl;
        cin >> f;
        cout << "The answer is: ";
        cout <<  C( f) << endl;
        cout << "Do you have another conversion. Enter Y for yes and N for no" << endl;
        cin >> another;

        while ( another == 'Y')
        {   
            cout << "Ok! Enter the temperature in Celsius" << endl;
            cin >> f;
            cout << "The answer is: ";
            cout << C(f) << endl;
            cout << "Do you have another conversion. Enter Y for yes and N for no" << endl;
            cin >> another;
        }}  


    if ( option == 2)
     {   cout << "Enter the temperature in Fahrenheit " << endl;
        cin >> c;
        cout << "The answer is: ";
        cout <<  F( c) << endl;
        cout << "Do you have another conversion. Enter Y for yes and N for no" << endl;
        cin >> another;

        while ( another == 'Y')
        {   
            cout << "Ok! Enter the temperature in Fahrenheit" << endl;
            cin >> c;
            cout << "The answer is: ";
            cout << F(c) << endl;
            cout << "Do you have another conversion. Enter Y for yes and N for no" << endl;
            cin >> another;
        }}  

    cout << "Have a nice day! Stay warm...or cool, I can't feel temperature...or feelings...not yet at least " << endl; 
    
    
    return 0;

}

// Function Definitions:

double C(double f)
{
    double frac1 = (5.0/9.0);
    return (frac1*(f-32));}

double F(double c)
{
    double frac2 = (9.0/5.0);
    return (frac2*(c+32));}











