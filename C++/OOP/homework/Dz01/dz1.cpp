#include <iostream>

using namespace std;

/*
1) Цифровой счетчик - это целочисленная переменная с ограниченным диапазоном, 
значение которой сбрасывается (к началу диапазона) 
при достижении определённого максимума (например, диапазон возможных значений счетчика - от 0 до 100).
 Опишите класс такого счетчика. Создайте соответствующие конструкторы и сэттеры. 
 Обеспечьте возможность установления минимального и максимального значений, 
 увеличения счетчика на 1, возвращения текущего значения. 
Создайте метод Run(), обеспечивающий несколько итераций счетчика.
*/

class Counter
{
private:
    int var;
    int min_var;
    int max_var;

    void drop()
    {
        if (var >= max_var || var < min_var)
        {
            var = min_var;
        }
    }

public:
    Counter()
    {
        min_var = 0;
        max_var = 100;
        var = min_var;
    }

    void set_min(int x)
    {
        min_var = x;
        drop();
    }
    void set_max(int x)
    {
        max_var = x;
        drop();
    }
    int get_min()
    {
        return min_var;
    }
    int get_max()
    {
        return max_var;
    }
    int get_var()
    {
        return var;
    }
    void add_1()
    {
        var++;
        drop();
    }
    void run(int x)
    {
        var += x;
        drop();
    }
    void current_status()
    {
        cout << "Your counter - " << var << "\n";
    }
};
int main()
{
    
    Counter c1;
    c1.current_status();
    c1.add_1();
    c1.current_status();
    c1.run(98);
    c1.current_status();
    c1.add_1();
    c1.current_status();

    cout << "Min - " << c1.get_min() << "\n";
    cout << "Max - " << c1.get_max() << "\n";
    cout << "\n-----\n";

    Counter c2;
    c2.set_min(5);
    c2.set_max(50);

    c2.current_status();
    c2.add_1();
    c2.current_status();
    c2.run(43);
    c2.current_status();
    c2.add_1();
    c2.current_status();

    cout << "Min - " << c2.get_min() << "\n";
    cout << "Max - " << c2.get_max() << "\n";

    return 0;
}