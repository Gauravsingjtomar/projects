#include <iostream>
#include <string>
using namespace std;

class Soldier 
{
    protected :
    string callsign;
};

class FighterPilot: public Soldier
{
    public :
    string Name;
    void setcallsign(string cs)
    {
        callsign = cs;
    }

    string getcallsign()
    {
    return callsign;
    }
};

int main ()
{
    FighterPilot myObj;
    myObj.setcallsign("Gauty");
    myObj.Name = ("Gaurav Singh Tomar");
    cout << "Callsign is :" << myObj.getcallsign() << "\n";
    cout << "Name is :" << myObj.Name << "\n";
   return 0;
}