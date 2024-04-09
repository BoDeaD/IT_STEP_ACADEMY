#include <iostream>
#include <cstring>

using namespace std;
/*
Добавить в ваш класс MyString перегрузку операторов:
++ в префиксной форме (добавление к концу нашего объекта-строки одного символа 'x'),
-- в префиксной форме (удаление одного символа из конца нашего объекта-строки).
А также добавить перегрузку операторов (в этих методах 
первоначальный объект не меняется):
MyString + int (добавление к концу нашего объекта 
определенного количества символов 'x'),
MyString - int (удаление определенного количества символов 
из конца нашего объекта).

*/

class MyString {
private:
    char *mystring;
    int length;

public:
    static int numberOfObject;

    MyString() : mystring(nullptr), length(0) {
        numberOfObject++;
    }

    MyString(const char *pstring) {
        mystring = new char[strlen(pstring) + 1];
        strcpy(mystring, pstring);
        length = strlen(mystring);
        numberOfObject++;
    }

    MyString(const MyString &obj) {
        mystring = new char[strlen(obj.mystring) + 1];
        strcpy(mystring, obj.mystring);
        length = obj.length;
        numberOfObject++;
    }

    MyString operator+(int num) const {
        MyString obj(*this); 

        char *temp = new char[length + num + 1];
        strcpy(temp, obj.mystring);

        for (int i = 0; i < num; i++) {
            temp[length + i] = 'x';
        }
        temp[length + num] = '\0';

        delete[] obj.mystring; 
        obj.mystring = temp;
        obj.length = strlen(obj.mystring);

        return obj;
    }

    MyString operator-(int num) const {
        MyString obj(*this); 

        if (num >= length) {
            
            delete[] obj.mystring;
            obj.mystring = new char[1];
            obj.mystring[0] = '\0';
            obj.length = 0;
            return obj;
        }

        obj.mystring[length - num] = '\0'; 
        obj.length = strlen(obj.mystring);

        return obj;
    }

    MyString operator++() {
        MyString obj(*this); 

        char *temp = new char[length + 2];
        strcpy(temp, obj.mystring);
        temp[length] = 'x';
        temp[length + 1] = '\0';

        delete[] obj.mystring; 
        obj.mystring = temp;
        obj.length = strlen(obj.mystring);

        return obj;
    }

    MyString operator--() {
        MyString obj(*this); 

        if (length > 0) {
            obj.mystring[length - 1] = '\0'; 
            obj.length = strlen(obj.mystring);
        }

        return obj;
    }

    void output_str() const {
        if (mystring != nullptr) {
            cout << "Your string - " << mystring << endl;
        } else {
            cout << "String is empty." << endl;
        }
    }

    ~MyString() {
        delete[] mystring;
    }

    static int get_numberOfObject() {
        return numberOfObject;
    }
};

int MyString::numberOfObject = 0;

int main() {
    MyString string1("How are you?");
    MyString string3 = string1 + 3;
    string3.output_str();

    MyString string4 = ++string3;
    string4.output_str();

    MyString string5 = --string4;
    string5.output_str();

    return 0;
}
