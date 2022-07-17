#include <iostream>
int main()
{
    using namespace std;

    wchar_t bob = L'P';
    char bob_asc = 'P';
    cout << bob_asc;
    cout << hex;
    cout << showbase;
    cout << " ASCII code:" << (static_cast<int>(bob_asc) & 0xff) << endl;
    wcout << bob;
    cout << hex;
    cout << " Unicode:" << bob << endl;
    wcout << L"tall" << endl;
    cout << "size of bob is " << sizeof(bob) << endl;

    return 0;
}
