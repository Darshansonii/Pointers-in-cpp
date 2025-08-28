//Darshan soni
//24070123034

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    float b = 9.4;
    float *fptr = &b;

    char c = 's';
    char *cptr = &c;

    bool d = 1;
    bool *dptr = &d;

    cout << "For integer" << endl;
    cout << "Before increment ";
    cout << ptr << endl;
    ptr++;
    cout << "After increment ";
    cout << ptr << endl << endl;

    cout << "For float" << endl;
    cout << "Before increment ";
    cout << fptr << endl;
    fptr++;
    cout << "After increment ";
    cout << fptr << endl << endl;

    cout << "For boolean" << endl;
    cout << "Before increment ";
    cout << dptr << endl;
    dptr++;
    cout << "After increment ";
    cout << dptr << endl << endl;

    cout << "For character" << endl;
    cout << "Before increment ";
    cout << cptr;
    cptr++;
    cout << "After increment ";
    cout << cptr;
    
    return 0;
}

/*Output
For integer
Before increment 0x61fefc
After increment 0x61ff00

For float
Before increment 0x61fef8
After increment 0x61fefc

For boolean
Before increment 0x61fef6
After increment 0x61fef7

For character
Before increment sffA
After increment ffA
*/