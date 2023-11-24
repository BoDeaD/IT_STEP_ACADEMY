#include <iostream>

using namespace std;

int attack(char (&field)[10][10], int flag)
{
    int x,y;
        cout << "\n-----\n";
        cout << "Enter x to attack - ";
        cin >> x;
        cout << "Enter y to attack - ";
        cin >> y;
    
    if (field[x][y] == '*'){
        cout << "Вы попали!" << "\n";
        field[x][y] = '#';
        return flag++;
    }
    else if (field[x][y] == ' '){
        cout << "Вы не попали :(" << "\n";
        field[x][y] = '#';
    }
    return 0;
}

int random_attack(char (&field)[10][10], int flag)
{
    int x,y;   
    x = rand() % 10; 
    y = rand() % 10;
    
    if (field[x][y] == '*'){
        cout << "Враг попал!" << "\n";
        field[x][y] = '#';
        return flag++;
    }
    else if (field[x][y] == ' '){
        cout << "Враг не попал :)" << "\n";
        field[x][y] = '#';
    }
    return 0;
}