#include <iostream>

using namespace std;

void max_element(int massive[], int s)
{
    for (int i = 0; i < s; i++){
        cout << "\n" << massive[i];
    }
    cout << "\n-----\n";
}
void max_element(float massive[], int s)
{
    for (int i = 0; i < s; i++){
        cout << "\n" << massive[i];
    }
    cout << "\n-----\n";
}
void max_element(double massive[], int s)
{
    for (int i = 0; i < s; i++){
        cout << "\n" << massive[i];
    }
    cout << "\n-----\n";
}
void max_element(char massive[], int s)
{
    for (int i = 0; i < s; i++){
        cout << "\n" << massive[i];
    }
    cout << "\n-----\n";
}
int main()
{
    int const size = 5;

    int x[] = {1,5,10,43,55};
    float l[] = {1.5,4.5,1.3,6.7,9.0};
    double z[] = {1.56,4.577,1.365,6.777,9.0865};
    char c[] = {97,111,142,89,120};
    max_element(x,size);
    max_element(l,size);
    max_element(z,size);
    max_element(c,size);


}