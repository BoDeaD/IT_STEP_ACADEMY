#include <iostream>
#include "field_func.cpp"

using namespace std;
// Шохін Сергій П25
// Морський бій
// добавить возможность поворота корабля

int main()
{
    char p_field[10][10] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
    };
    //Main menu 
    int pl_choice;
    cout << "\t\tМорской бой" << "\n";
    cout << "\tMenu:" << "\n\t1. Play\n\t2. Exit\nEnter to continue - ";
    cin >> pl_choice;
    // Game start
    switch (pl_choice)
    {
    case 1:
        print_field(p_field);
        fill_field(p_field);
        break;
    case 2:
        cout << "Goodbuy!!!" << "\n";
        return 0;
    
    default:
        break;
    }

    return 0;
}