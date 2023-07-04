#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
     cout << "Home task #9.1a\n";
     int userChoice, i,j, step;
     const int size1 = 10;
     const int size2 = 12;
     do {cout << "Your choice:\n";
         cout << "1 - a\n";
         cout << "2 - b\n";
cout << "3 - c\n";
cout << "4 - d\n";
cout << "5 - e\n";
cout << "6 - quit\n";
cin >> userChoice;
switch (userChoice) {
case 1:
{
    cout << "Triangle version-a\n";
    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size1; j++)
{
if (j >= i)
{ cout << "*";
}else
{
cout << " ";
}
}cout << "\n"; }break;
}case 2:
{
    cout << "Triangle version-b\n";
    for (i = 0; i < size1; i++){
        for (j = 0; j <= i; j++) { cout << "*";
}cout << "\n";
}break;
}case 3:
{
    cout << "Triangle version-c\n";
    for (i = 0; i <= size2/2; i++)
    {
        for (j = 0; j <= size2-i; j++)
{
if (j >= i)
{ cout << "*";
}else
{ cout << " "; }}
    }   cout << "\n";
}   break;
case 4:
{
    cout << "Triangle version-d\n";
    step = 1;
    for (i = 0; i < size2; i++)
        {
        if (i <= size2/2-1)
        {   cout << "\n";
}else {
            for (j = 0; j < i; j++)
            {
                if (j >= i - step)
{ cout << "*";
}else
{ cout << " "; }}
            step = step + 2;
            cout << "\n";
        }
}break;
}case 5:
{
    cout << "Triangle version-e\n";
    step = 1;
    for (i = 0; i < size2; i++)
    {
        if (i <= size2/2-1)
        {
            for (j = 0; j <= size2- i; j++)
{
if (j >= i)
{ cout << "*";
}else
{ cout << " "; }}
        }   cout << "\n";
 else {
            for (j = 0; j < i; j++)
            {
                if (j >= i - step)
{ cout << "*";
}
}else
{ cout << " "; }}
            step = step + 2;
            cout << "\n";
}} } break;
case 6:
     {
            cout << "See you!";
} break;
default:
            cout << "Wrong menu item!";
        }
    } while (userChoice != 6);
return 0; }