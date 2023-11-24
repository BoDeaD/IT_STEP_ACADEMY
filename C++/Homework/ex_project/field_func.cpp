#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

void print_field(char field[10][10]);
bool is_valid_position(int x, int y, int length);
bool is_access_position(char field[10][10],int x,int y,int length);
int fill_field(char (&field)[10][10]);
int random_fill_field(char (&field)[10][10]);

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

char AI_field[10][10] = {
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

struct ship {
        int x;
        int y;
        int length;
};

void print_field(char field[10][10])
{
    cout << "\t\tВаше поле - " << "\n";
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

    return 0;
}
int random_fill_field(char (&field)[10][10])
{
    int targetLineNumber = 0;
    time_t t1 = time(NULL);
    tm t = *localtime(&t1);
    targetLineNumber = t.tm_sec % 10;

    FILE *file1 = fopen("AI_x.txt", "r");
    char buffer1[256];
    int lineNumber = 0;
    char result_string_x[256] = "";

    while (fgets(buffer1, sizeof(buffer1), file1) != nullptr) {
        lineNumber++;

        if (lineNumber == targetLineNumber) {
            strcpy(result_string_x, buffer1);
            break;
        }
    }
    fclose(file1);

    FILE *file2 = fopen("AI_y.txt", "r");
    char buffer2[256];
    lineNumber = 0;
    char result_string_y[256] = "";

    while (fgets(buffer2, sizeof(buffer2), file2) != nullptr) {
        lineNumber++;

        if (lineNumber == targetLineNumber) {
            strcpy(result_string_y, buffer2);
            break;
        }
    }
    fclose(file2);

    const int length = 10;
    ship massive[length];

    int flag = 0;
    for (int i = 0; i < length; i++){
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
        massive[i].x = ((int)result_string_x[i] % 48);
        massive[i].y = ((int)result_string_y[i] % 48);
    }

    for (int i = 0; i < length; i++){
        for (int j = 0; j < massive[i].length; j++){
                field[(10 - (massive[i].y))-j][(massive[i].x)-1] = '*';
        }
    }
    return 0;
}