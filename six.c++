#include <iostream>
using namespace std;

int main() {
  int rows;
  cout << "Enter Inverted Right Triangle of Alphabets Rows = ";
  cin >> rows;
  cout << "Printing Inverted Right Triangle Alphabets Pattern\n";
  int alphabet = 65; // ASCII value of 'A'

  for (int i = rows - 1; i >= 0; i--) {
    for (int j = 0; j <= i; j++) {
      cout << char(alphabet + j);
    }
    cout << endl;
  }
  return 0;
}