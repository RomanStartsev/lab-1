#include <iostream>
using namespace std;

int main()
{
    cout << "Complected Startsev Roman" << endl;
    // Zadanie 2.1
    cout << 123 << endl; // integer or byte
    cout << 1E6 << endl; // error
    cout << 123456789LU << endl; // error
    cout << -5 << endl; // integer or byte
    cout << 0XFUL << endl; // integer or byte
    cout << '0' << endl; // integer or byte
    cout << '\x7' << endl; // error
    cout << 00123 << endl; // integer or byte
    cout << 0xffffffL << endl; // integer or byte
    cout << -'x' << endl; // integer or byte
    cout << "x" << endl; // integer or byte
    cout << 0731UL << endl; // integer or byte
    cout << '\n' << endl; // error
    cout << +0xaf << endl; // integer or byte
}
