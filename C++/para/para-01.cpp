#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "");

    char chr1, chr2, chr3;
    chr1 = 'ы';
    chr2 = 'э';
    chr3 = 'ё';

    cout << (int)chr1 << "\n";
    cout << (int)chr2 << "\n";
    cout << (int)chr2 << "\n";
}