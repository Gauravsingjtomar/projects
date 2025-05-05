#include <iostream>
#include <string>
using namespace std;

class FighterPilot
{
    private :
    string callsign;

    public:
    void setcallsign(string cs)
    {
        callsign = cs;
    }

    string getcallsign ()
    {
        return callsign;
    }
};

int main()
{
    FighterPilot myobj ;
    myobj.setcallsign("Gauty");
    cout << myobj.getcallsign() ;
    return 0;
}