#include <iostream>
#include <string>
using namespace std;

int main ()
{
 try 
   {
     string Pass = "Gaurav Singh Tomar";
     if( Pass == "gaurav Singh Tomar")
     {
     cout << "Password is correct , Access Granted";
     }
     else
     {
        throw 505;
     }
   }
   catch (int mynum)
   {
    cout << "Password is wrong , Access Denied" << "\n";
    cout << "Error Number" << mynum ;
   }
}

