#include <iostream>
using namespace std;

int main(){
    // variables with input
    int n;
    int reverse = 0;
    cout << "Input the odd number to process: ";
    cin >> n;

    while (n > 0) {
        int lastN = n % 10;
        reverse = reverse * 10 + lastN;
        n /= 10;
    }

    cout << reverse << endl;
}