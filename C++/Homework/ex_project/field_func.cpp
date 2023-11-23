#include <iostream>

using namespace std;

struct ship {
        int x;
        int y;
        int length;
};
void print_field(char field[10][10]);
bool is_valid_position(int x, int y, int length);
bool is_access_position(char field[10][10],int x,int y,int length);
int fill_field(char (&field)[10][10]);

void print_field(char field[10][10])
{
    cout << "   --------------------------------" << "\n";
    for (int i = 0; i < 10; ++i) {
        if (i != 0){
        cout << "Y" << 10 - i << " |";
        }
        else{
            cout << "Y" << 10 - i << "|";
        }
        for (int j = 0; j < 10; ++j) {
            std::cout << field[i][j] << "  ";
        }
        cout << "|" << "\n";
    }
    cout << "   --------------------------------" << "\n";
    cout << "   X1 X2 X3 X4 X5 X6 X7 X8 X9 X10" << "\n";
}

bool is_valid_position(int x, int y, int length)
{
    if (x < 10 && y < 10 && x >= 1 && y >= 1){
        if ((y-1)+length < 11){
            return true;
        }
        else return false;
    }
    else return false;
}

bool is_access_position(char field[10][10],int x,int y,int length)
{
    int flag = 0;
    for (int i = 0; i < length; i++){
        if (field[(10 - y) - i][x] != '*')
        {
            flag++;
        }
        else flag--;
    }
    if (flag == length){
        return true;
    }
    else return false;
}

int fill_field(char (&field)[10][10]){
    const int length = 10;
    ship massive[length];
    // Данные от пользователя
    int x1,y1;
    int flag = 0;
    for (int i = 0; i < length; i++){
        cout << "-----\n";
        cout << "Enter x for ship" << i+1 << " - ";
        cin >> x1;
        cout << "Enter y for ship" << i+1 << " - ";
        cin >> y1;

        if (i == 1){
            flag++;
        }
        else if (i == 3){
            flag++;
        }
        else if (i == 6){
            flag++;
        }
        massive[i].length = 4-flag;
        if (is_valid_position(x1,y1,(massive[i].length))){
            massive[i].x = x1;
            massive[i].y = y1;
        }
        else {
            cout << "Uncorrect data" << "\n";
            fill_field(field);
        }
    }
    // Заполнение поля кораблями
    for (int i = 0; i < length; i++){
        for (int j = 0; j < massive[i].length; j++){
            if (is_access_position(field,massive[i].x,massive[i].y,massive[i].length)){
                field[(10 - (massive[i].y))-j][(massive[i].x)-1] = '*';
            }
            else {
                cout << "Error: wrong position" << "\n";
                fill_field(field);
            }
        }
    }

    cout << "\tYour field:" << "\n";
    print_field(field);
    
    return 0;
}
