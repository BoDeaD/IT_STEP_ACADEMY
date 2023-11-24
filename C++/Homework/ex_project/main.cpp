#include <iostream>
#include "field_func.cpp"
#include "game_func.cpp"

using namespace std;
// Шохін Сергій П25
// Морський бій
void clearConsole() {
    system("clear");
}

int main()
{
    //Main menu 
    int pl_choice1;
    cout << "\t\tМорской бой" << "\n";
    cout << "\tMenu:" << "\n1. Play\n2. Exit\nEnter to continue - ";
    cin >> pl_choice1;
    // Game start
    switch (pl_choice1)
    {
    case 1:
        cout << "\t\tРежим игры" << "\n";
        cout << "1. Против ИИ\n2. Выход\nEnter to continue - ";
        cin >> pl_choice1;
        switch (pl_choice1)
        {
            case 1:
                cout << "\t\tКак розставить корабли?" << "\n";
                cout << "1.Сам всё сделаю \n2.Рандом\nEnter to continue - ";
                cin >> pl_choice1;
                clearConsole();
                switch (pl_choice1)
                {
                case 1:
                    // создание полей для игры
                    fill_field(p_field);
                    print_field(p_field);
                    break;
                case 2:
                    random_fill_field(p_field);
                    print_field(p_field);
                    break;

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
        break;
    case 2:
        cout << "Goodbuy!!!" << "\n";
        return 0;
    
    default:
        break;
    }

    random_fill_field(AI_field);
    cout << "Enter  coordinates to continue - \n";
    while(true)
    {
        int p_pointer = 0;
        int AI_pointer = 0;
        cout << "\t\tВаш ход" << "\n";
        attack(AI_field, p_pointer);

        cout << "\t\tХод врага" << "\n";
        random_attack(p_field, AI_pointer);
        print_field(p_field);

        if (p_pointer == 20){
            cout << "\nYou win" << "\n";
            return 0;
            break;
        }
        else if (AI_pointer == 20){
            cout << "\nEnemy win" << "\n";
            return 0;
            break;
        }
    }    
}