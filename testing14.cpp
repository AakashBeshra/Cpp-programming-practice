// Write program, which will print all numbers which are multiple of 3 or 7
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 || i % 7 == 0) {
            cout << i << " ";
        }
    }
    return 0;
}