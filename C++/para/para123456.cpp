#include <iostream>
using namespace std;
#define TASK 3
#if TASK == 1
int main(int argc, char* argv[])
{
    cout << "Your program name is: " << argv[0] << endl;
    cout << "*************************************" << endl;
    return 0;
}
#endif
#if TASK == 2
int main(int argc, char* argv[])
{
    cout << "*************************************" << endl;
    cout << "Your program name is: " << argv[0] << endl;
    cout << "We sent " << argc << " arguments:" << endl;
    for (int i = 0; i < argc; i++)
        cout << i << ": " << argv[i] << endl;
    cout << "*************************************" << endl;
    return 0;
}
#if TASK == 3
int main(int argc, char* argv[])
{
    int value;
    cout << "Your program name is " << argv[0] << endl;
    if (argc < 2)
    {
        cout << "Not enough arguments!" << endl;
    }
    else if (argc == 2)
    {
        value = atoi(argv[1]);
        cout << "Result:" << value * 100 << endl;
    }
    else
    {
        cout << "Too many arguments!" << endl;
    }
    cout << "We sent " << argc << " arguments:" << endl;
    for (int i = 0; i < argc; i++)
        cout << i << ": " << argv[i] << endl;
    return 0;
}
#endif
#endif