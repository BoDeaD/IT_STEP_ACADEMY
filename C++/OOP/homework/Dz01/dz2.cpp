#include <iostream>

using namespace std;

/*
2) Написать класс, описывающий лифт в многоэтажном доме. 
В нем должен быть, в числе прочего, метод для передвижения на нужный этаж.
*/
class Elevator
{
private:
    int min_floor = 0;
    int current_floor;
    int max_floor;

    bool is_valid_floor(int floor)
    {
        if (floor > max_floor || floor < min_floor){
            return 0;
        }
        else {
            current_floor = floor;
            return floor;
        }
    }

public:
    Elevator()
    {
        current_floor = min_floor;
        max_floor = 16;
    }

    int call(int cfloor)
    {
        if (is_valid_floor(cfloor)){
            current_floor = cfloor;
        }
        else{
            cout << "No floor with " << cfloor << " number!\n";
            return 0;
        }
        cout << "Лифт едет с " << current_floor << " на " << cfloor << " этаж\n";
        return current_floor;
    }
    int go_to(int nfloor)
    {
        if (is_valid_floor(nfloor)){
            current_floor = nfloor;
        }
        else{
            cout << "No floor with " << nfloor << " number!\n";
            return 0;
        }
        cout << "Лифт едет на " << nfloor << " этаж\n";
        return current_floor;
    }
    void zero_floor()
    {
        cout << "Лифт едет на этаж 0 \n";
        current_floor = 0;
    }
    void set_max(int x)
    {
        max_floor = x;
    }
};

int main()
{
    Elevator c1;
    c1.set_max(15);
    c1.call(1);
    c1.go_to(15);

    return 0;
}