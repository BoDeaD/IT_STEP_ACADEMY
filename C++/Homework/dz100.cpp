#include <iostream>

using namespace std;

/*
Задание 1
Написать функцию, которая заменяет все символы точки «.» в строке на символы восклицательного знака «!»
*/
void func1(char* text)
{
    int length = strlen(text);
    
    for (int i = 0; i < length; i++){
        if (text[i] == '.'){
            text[i] = '!';
        }
    }
    cout << text << "\n";
}

/*
Задание 2
Пользователь вводит символ. 
Нужно написать функцию, которая посчитает и выведет число, сколько раз этот символ появился в строке.
*/
void func2(char* text)
{
    char letter;
    int flag = 0;

    cout << "Enter the symbol - ";
    cin >> letter;

    for (int i = 0; i < strlen(text); i++)
    {
        if (letter == text[i])
        {
            flag++;
        }
    }
    cout << "Этот символ появился в строке - " << flag << " раз\n";
}


int main()
{
    char text[] = "HI. My name is Serge...";
    cout << text << "\n";
    //func1(text);
    //func2(text);

    return 0;
}