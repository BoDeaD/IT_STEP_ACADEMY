#include <iostream>

using namespace std;
/*
2) Добавить конструктор копирования в класс MyString (см. предыдущее ДЗ).
*/
class MyString
{
    char *mystring;
    int length = strlen(mystring);
public:
    static int numberOfObject;

    MyString(const MyString& obj)
    {
        cout << "Конструктор копирования\n";

        mystring = new char[strlen(obj.mystring) + 1];
        strcpy(mystring, obj.mystring);

        length = obj.length;
    }

    MyString() {mystring = new char[80 + 1]; numberOfObject++;}
    MyString(int length) {mystring = new char[length + 1]; numberOfObject++;}
    MyString(char *pstring)
    {
        numberOfObject++;
        mystring = new char[strlen(pstring) + 1];
        strcpy(mystring, pstring);
    }

    void input_str()
    {
        cout << "Enter string - " << "\n";
        cin >> mystring;
    }
    void output_str()
    {
        cout << "Your string - " << mystring << "\n";
    }

    ~MyString()
    {
        delete[] mystring;
    }

    static int get_numberOfObject()
    {
        return numberOfObject;
    }
};

int MyString::numberOfObject = 0;

int main()
{
    MyString string1("How are you?");
    MyString string2 = string1;

    return 0;
}