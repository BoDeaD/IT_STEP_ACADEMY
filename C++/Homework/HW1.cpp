#include <iostream>

using namespace std;

int mystrcmp (const char * str1, const char * str2);
int stringToNumber(char * str); 
char * numberToString (int number); 
char * uppercase (char * str1); 
char * lowercase (char * str1); 
char * mystrrev (char * str);

int main()
{
    int number = 89;
    char str1[20] = "Hi, I am Sergey";
    char str2[20] = "Hi, I am Sergey";
    char *result3 = numberToString(number);

    cout << "func1 - " << mystrcmp(str1, str2) << "\n";
    cout << "func2 - " << stringToNumber(str1) << "\n";
    cout << "func3 - " << result3 << "\n";
    cout << "func4 - " << uppercase(str1) << "\n";
    cout << "func5 - " << lowercase(str1) << "\n";
    cout << "func6 - " << mystrrev(str1) << "\n";

    delete[] result3;

    return 0;
}

int mystrcmp (const char * str1, const char * str2)
{
    int txt1 = strlen(str1);
    int txt2 = strlen(str2);

    if (txt1 == txt2){
        return 0;
    }
    else if (txt1 > txt2)
    {
        return 1;
    }
    else 
    {
        return -1;
    }
    
}

int stringToNumber(char * str)
{
    int result = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        result += (int)str[i];
    }
    return result;
}

char *numberToString (int number)
{
    int num = number;
    int temp = num;
    int length = 0;

    while (temp != 0) {
        temp /= 10;
        length++;
    }

    if (num == 0) {
        char* str = new char[2];
        str[0] = '0';
        str[1] = '\0';
        return str;
    }

    char* txt = new char[length + 1];
    txt[length] = '\0'; 

    for (int i = length - 1; i >= 0; i--) {
        txt[i] = '0' + (num % 10); 
        num /= 10;
    }

    return txt;
}

char *uppercase (char * str1)
{
    for (int i = 0; i < strlen(str1); i++)
    {
        char letter = str1[i];
        if (islower(letter)){
            str1[i] = ((int)letter) - 32;
        }
        else {
            str1[i] = letter;
        }
    }
    return str1;
}

char *lowercase (char * str1)
{
    for (int i = 0; i < strlen(str1); i++)
    {
        char letter = str1[i];
        if (isupper(letter)){
            str1[i] = ((int)letter) + 32;
        }
        else {
            str1[i] = letter;
        }
    }
    return str1;
}

char *mystrrev (char * str)
{
    int length = strlen(str);
    char* txt = new char[length + 1]; 

    int pointer = 0;
    for (int i = length - 1; i >= 0; i--) {
        txt[pointer] = str[i];
        pointer++;
    }

    txt[length] = '\0'; 
    return txt;
}