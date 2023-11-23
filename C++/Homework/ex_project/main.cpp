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
    int pl_choice1;
    int pl_choice2;
    cout << "\t\tМорской бой" << "\n";
    cout << "\tMenu:" << "\n\t1. Play\n\t2. Exit\nEnter to continue - ";
    cin >> pl_choice1;
    // Game start
    switch (pl_choice1)
    {
    case 1:
        cout << "\t\tРежим игры" << "\n";
        cout << "1. Против ИИ\n2. Выход\nEnter to continue - ";
        cin >> pl_choice2;
        switch (pl_choice2)
        {
            case 1:
                //print_field(p_field);
                //fill_field(p_field);
                break;

            case 2:
                cout << "Goodbuy!!!" << "\n";
                return 0;

            default:
                break;
        }
        break;
    case 2:
        cout << "Goodbuy!!!" << "\n";
        return 0;
    
    default:
        break;
    }

    return 0;
}