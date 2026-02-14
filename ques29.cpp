#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[30];

    for (int i = 0; i < 30; i++) {
        cin >> arr[i];
    }

    int maxTemp = *max_element(arr, arr + 30);

    cout << "Maximum temperature: " << maxTemp << endl;
}
