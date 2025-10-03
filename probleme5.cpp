#include <iostream>
using namespace std;

int main() {
    int i, count = 0;

    for (i = 65; i <= 90; i++) {
        cout << char(i) << " ";
        count++;
        if (count % 5 == 0) {
            cout << endl;
        }
    }

    return 0;
}
