//Darshan soni
//24070123034

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr = &a;
    cout << a << endl;
    cout << aptr << endl;
    cout << *aptr << endl;
    cout << &a << endl;

    return 0;
}

/*Output
10
0x61ff08
10
0x61ff08
*/