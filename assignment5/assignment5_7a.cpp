#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int integer;
    cout << "Enter a positive integer <=15 to display the square: "; cin >> integer;
   
    for (int i = 0; i < integer;i++){

    for (int a=0; a < i ;a++)  { 
        cout << "X";
    };
  
    cout << "X"<< endl;
    };
    
    return 0;
}