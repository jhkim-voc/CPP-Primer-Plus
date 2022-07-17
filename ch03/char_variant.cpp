#include <iostream>
int main()
{
    using namespace std;

    char16_t ch1 = u'q';
    char32_t ch2 = U'\U0000222B';
    
    cout << ch1 << " " << ch2 << endl;
    cout << hex << showbase;
    cout << ch1 << " " << ch2 << endl;
    cout << sizeof(char16_t) << " " << sizeof(char32_t) << endl;

    return 0;
}
