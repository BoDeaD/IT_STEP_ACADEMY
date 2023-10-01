#include <iostream>

using namespace std;

// 1) Используя указатели и оператор разыменования, определить знак числа, введённого с клавиатуры. 
void func1(int num)
{
    int *p_num = &num;

    cout << "---" << "\n";
    if (*p_num > 0) {
        cout << "Число положительное." << "\n";
    } else if (*p_num < 0) {
        cout << "Число отрицательное." << "\n";
    } else {
        cout << "Число равно нулю." << "\n";
    }
}
//2) Написать примитивный калькулятор, пользуясь только указателями и оператором разыменования.
void func2(int num1,int num2,string p)
{
    int result = 0;
    int *p_num1 = &num1;
    int *p_num2 = &num2;
    string *p_p = &p;

    if (*p_p == "+"){
        result = *p_num1 + *p_num2;
    }
    else if (*p_p == "-"){
        result = *p_num1 - *p_num2;
    }
    else if (*p_p == "/"){
        result = *p_num1 / *p_num2;
    }
    else if (*p_p == "*"){
        result = *p_num1 * *p_num2;
    }
    else {
        cout << "Uncorect enter data";
    }

    cout << "-----\n" << *p_num1 << *p_p << *p_num2 << "=" << result << "\n";
}

//3) Используя только указатели и оператор разыменования, обменять местами значения двух переменных.
int func3(int var1, int var2)
{
    //До изменения
    cout << "\nvar1 = " << var1;
    cout << "\nvar2 = " << var2;

    int *p_var1 = &var1;
    int *p_var2 = &var2;
    int p = *p_var1;
    
    *p_var1 = *p_var2;
    *p_var2 = p;
    // После изменения
    cout << "\n-----\nvar1 = " << var1;
    cout << "\nvar2 = " << var2;
    cout << "\n";

    return 0;
}
int main()
{
    int num1 = 10;
    int num2 = 20;
    //func1(num1);
    //func2(num1,num2,"*");
    func3(num1,num2);
    
    return 0;
}