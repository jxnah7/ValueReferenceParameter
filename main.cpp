// example of a funciton with a value parameter
#include <iostream>
#include <iomanip>

using namespace std;

void PrintVal(int & par);       //function prototype

int main ()
{
    
    int arg;
    arg = 10;
    cout << "The value in the variable arg in main is: " << arg << endl << endl;
    PrintVal(arg);
    cout << "The value in variable arg in main is: " << arg << endl << endl;
    
    
    
    return 0;
}

// THis function recieves a number in par and prints the value.
void PrintVal(int & par)        //par is a REFERENCE parameter
{
    cout << "The value recieved in the funciton was: " << setw(2) << par << endl << endl;
    par = 2 * par;
    cout << "The new value in the function was: " << setw(2) << par << endl << endl;
}
