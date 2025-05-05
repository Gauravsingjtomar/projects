#include <iostream>
using namespace std;

int main() {

    char input, alphabet = 'A';

    cout << "Enter the uppercase character you want to print in the last row: ";
    cin >> input;

    input = toupper(input);

    for(int i = (input-'A'+1); i >= 1; --i) {
        for(int j = 1; j <=(input-'A'+1)-i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k)
        {
            cout << alphabet;
        }
        ++alphabet;

        cout << endl;
    }
    return 0;
}