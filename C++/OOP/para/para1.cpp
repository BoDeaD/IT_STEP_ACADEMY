#include <iostream>

using namespace std;

class Test
{
    int a;
    int b;
public:
    void Set_a(int x)
    {
        a = x;
    }
    void Set_b(int x)
    {
        b = x;
    }
    int Get_a()
    {
        return a;
    }
    int Get_b()
    {
        return b;
    }
    void Output()
    {
        cout << a << "\n";
        cout << b << "\n";
    }
};

class Rectangle
{
    int a;
    int b;
public:
    Rectangle()
    {
        a = 5;
        b = 5;
    }
    int Perimetr()
    {
        return 2 * (a + b);
    }
    int Area()
    {
        return a * b;
    }
    void Set_a(int x)
    {
        a = x;
    }
    void Set_b(int x)
    {
        b = x;
    }
    int Get_a()
    {
        return a;
    }
    int Get_b()
    {
        return b;
    }
    void Output()
    {
        cout << a << "\n";
        cout << b << "\n";
    }
};

class Circle
{
    int r;
public:
    Circle()
    {
        r = 3;
    }
    int Perimetr()
    {
        return 2 * 3,14 * r;
    }
    int Area()
    {
        return 3,14 * (r * r);
    }
    void Set_r(int x)
    {
        r = x;
    }
    int Get_r()
    {
        return r;
    }
    void Output()
    {
        cout << r << "\n";
    }
};


int main()
{
    Rectangle obj;
    obj.Output();

    return 0;
}