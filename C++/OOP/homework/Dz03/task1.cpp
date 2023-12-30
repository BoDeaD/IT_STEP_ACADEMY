#include <iostream>

using namespace std;

/*
1) Реализуйте класс Дробь. Необходимо хранить числитель и знаменатель в качестве переменных-членов.
Реализуйте функции-члены для ввода данных в переменные-члены, для выполнения арифметических операций
(сложение, вычитание, умножение, деление). Арифметические операции должны выполняться с двумя дробями.
*/

class Drob
{
    int numerator;
    int denominator;

public:
    Drob()
    {
        numerator = 1;
        denominator = 1;
    }
    Drob(int num, int denom)
    {
        numerator = num;
        denominator = denom;
    }
    void enter_numerator(int a)
    {
        numerator = a;
    }
    void enter_denominator(int a)
    {
        denominator = a;
    }
    int get_numerator()
    {
        return numerator;
    }
    int get_denominator()
    {
        return denominator;
    }
    void sum(Drob x){
        if (denominator != x.get_denominator()){
            numerator = (numerator * x.get_denominator()) + (x.get_numerator() * denominator);
            denominator = denominator * x.get_denominator();
        }
        else if (denominator == x.get_denominator()){
            numerator = numerator + x.get_numerator();
        }
        else{
            cout << "Error" << "\n";
        }
    }
    void odds(Drob x){
        if (denominator != x.get_denominator()){
            numerator = (numerator * x.get_denominator()) - (x.get_numerator() * denominator);
            denominator = denominator * x.get_denominator();
        }
        else if (denominator == x.get_denominator()){
            numerator = numerator - x.get_numerator();
        }
        else{
            cout << "Error" << "\n";
        }
    }
    void product(Drob x){
        numerator = numerator * x.get_numerator();
        denominator = denominator * x.get_denominator();
    }
    void part(Drob x){
        numerator = numerator * x.get_denominator() ;
        denominator = denominator * x.get_numerator();
    }
    void print_p(){
        cout << "numerator - " << numerator << "\n";
        cout << "denominator - " << denominator << "\n";
    }
};

int main()
{
    Drob x1(3,2);
    Drob x2(1,5);
    // Сумма
    //x1.sum(x2);
    //x1.print_p();
    
    // Разность
    //x1.odds(x2);
    //x1.print_p();

    // Добуток
    //x1.product(x2);
    //x1.print_p();

    // Частное
    //x1.part(x2);
    //x1.print_p();
    return 0;
}