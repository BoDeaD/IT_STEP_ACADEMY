#include <iostream>

using namespace std;
/*
1) Написать класс Дробь, включающий целочисленные поля Числитель и Знаменатель. Добавить в класс
перегрузку операторов +, -, *, /. Эти арифметические операторы должны выполнять действия над двумя дробями.
*/
class Drob
{
    int num;
    int denum;
public:
    Drob(){num = 1; denum = 1;}
    Drob(int n, int d) {num = n; denum = d;}

    Drob operator+(const Drob& other) const {
        int newNumerator = num * other.denum + other.num * denum;
        int newDenominator = denum * other.denum;
        return Drob(newNumerator, newDenominator);
    }
    Drob operator-(const Drob& other) const {
        int newNumerator = num * other.denum - other.num * denum;
        int newDenominator = denum * other.denum;
        return Drob(newNumerator, newDenominator);
    }
    Drob operator*(const Drob& other) const {
        int newNumerator = num * other.num;
        int newDenominator = denum * other.denum;
        return Drob(newNumerator, newDenominator);
    }
    Drob operator/(const Drob& other) const {
        int newNumerator = num * other.denum;
        int newDenominator = denum * other.num;
        return Drob(newNumerator, newDenominator);
    }
    int get_num()
    {
        return num;
    }
    int get_denum()
    {
        return denum;
    }
    void printDrob()
    {
        cout << "Numerator - " << get_num() << " | Denominator - " << get_denum() << "\n";
    }
};

int main()
{
    Drob frac1(1, 2);
    Drob frac2(1, 3);

    Drob sum = frac1 + frac2;
    Drob difference = frac1 - frac2;
    Drob product = frac1 * frac2;
    Drob quotient = frac1 / frac2;

    cout << "Sum: ";
    sum.printDrob();
    
    cout << "Difference: ";
    difference.printDrob();
    
    cout << "Product: ";
    product.printDrob();
    
    cout << "Quotient: ";
    quotient.printDrob();

    return 0;
}