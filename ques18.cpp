#include <iostream>
using namespace std;

int main() {
    int n, a= 0, temp;
    cin >> n;

    temp = n;
    while (n > 0) {
        a = a * 10 + n % 10;
        n =n/10;
    }

    if (a == temp)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
