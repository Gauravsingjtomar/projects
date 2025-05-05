#include <iostream>
using namespace std;

int main() {

    int rows = 5;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i) {
        for(int j = 1; j <= rows-i; ++j) {
            cout << " ";
        } 
           for ( int k = 1; k <= i; ++k)
        {
            cout << k;
        }
        cout << "\n";
    }
    return 0;
}