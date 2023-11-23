#include <iostream>
#include <cmath>

using namespace std;

int btd(int binary) {
    int decimal = 0, i = 0, remainder;

    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }

    return decimal;
}

int main() {
    int binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    int decimaleq = btd(binary);

    cout << "Decimal equivalent: " << decimaleq << endl;

    return 0;
}
