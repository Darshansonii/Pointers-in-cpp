//Darshan soni
//24070123034

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    char* ptr = str;
    int length = strlen(str);

    ptr = str + length - 1;

    cout << "Reversed string: ";
    while (ptr >= str) {
        cout << *ptr;
        ptr--;
    }

    return 0;
}


/*Output
Enter a string: Hello world
Reversed string: dlrow olleH
*/