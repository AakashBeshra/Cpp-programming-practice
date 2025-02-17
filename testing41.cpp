/*Our Chef has some students in this coding class who are practicing problems. Given the difficulty of the problems that the students have solved in order, help the Chef identify if they are solving them in non-decreasing order of difficulty. Non-decreasing means that the values in an array is either increasing or remaining the same, but not decreasing. That is, the students should not solve a problem with difficulty d1, and then later a problem with difficulty d2, where d1>d2d1>d2.
Output "Yes" if the problems are attempted in non-decreasing order of difficulty rating and "No" if not.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of 22 lines of input.
The first line contains a single integer N, the number of problems solved by the students.
The second line contains N space-separated integers, teh difficulty ratings of the problems attempted by the students in order.

Output Format
For each test case, output in a new line "Yes" if the problem are attempted in non-decreasing order of difficulty rating and "No" if not. The output should be printed without the quotes.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings yes, YeS and YES will all be treated as equivalent.

Input
4
3
1 2 3
3
1 1 2
5
100 200 300 400 350
5
1000 2000 5000 3000 1000

Output
Yes
Yes
No
No*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;

        vector<int> difficulties(N);
        for (int i = 0; i < N; i++) {
            cin >> difficulties[i];
        }

        bool non_decreasing = true;
        for (int i = 1; i < N; i++) {
            if (difficulties[i] < difficulties[i - 1]) {
                non_decreasing = false;
                break;
            }
        }
        if (non_decreasing) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
