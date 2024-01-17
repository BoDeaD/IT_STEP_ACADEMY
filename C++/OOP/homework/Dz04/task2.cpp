#include <iostream>

using namespace std;
/*
2) Разработать класс MyString (аналог класса string), который в дальнейшем будет
использоваться для работы со строками. Класс должен
содержать:
• Конструктор по умолчанию, позволяющий создать
строку длиной 80 символов;
• Конструктор, позволяющий создавать строку произвольного размера (принимает количество символов, из которых будет состоять строка);
• Конструктор, который создаёт строку и инициализирует её строкой, полученной в виде параметра этого конструктора;
Класс должен содержать методы для ввода строк с клавиатуры и вывода строк на экран и деструктор. Также нужно реализовать
статическую функцию-член, которая будет возвращать количество созданных объектов-строк.
Поля класса MyString:
char* - указатель на динамический массив символов;
int - размер динамического массива символов;
статическое поле.
*/
class MyString
{
    char *mystring;
    int length = strlen(mystring);
public:
    static int numberOfObject;

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
    return 0;
}