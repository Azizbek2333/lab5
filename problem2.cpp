#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
        sum = sum + i;   // full form
    }

    cout <<"sum is"<<sum << endl;
    return 0;
}
