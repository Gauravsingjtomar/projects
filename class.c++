#include <iostream>
#include <string>
using namespace std;

class bike
{
    public:
   string brand;
   string model;
   int year;
};

int main ()
{
  bike bikeobj1;
  bikeobj1.brand = "Royal Enfield";
  bikeobj1.model = "Super Motorieo";
  bikeobj1.year = 1999;

  bike bikeobj2;
  bikeobj2.brand = "Harley Davidson";
  bikeobj2.model = "FatBob";
  bikeobj2.year = 2004;


  cout << bikeobj1.brand << " " << bikeobj1.model << " " << bikeobj1.year << "\n";
  cout << bikeobj2.brand << " " << bikeobj2.model << " " << bikeobj2.year ;
  return 0;
}




