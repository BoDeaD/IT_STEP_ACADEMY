#include <iostream>

using namespace std;

struct videoshop
{
    char name[30];
    char producer[30];
    char genre[20];
    float rating;
    float cost;
};

void nameSearch(videoshop film[], int length, const char* f_name) {
    for (int i = 0; i < length; i++) {
        if (strcmp(film[i].name, f_name) == 0) {
            cout << "Фильм " << f_name << " находится в структуре - film" << i+1 << "\n";
        }
    }
    cout << "---\n";
}
void genreSearch(videoshop film[], int length, const char* f_genre) {
    for (int i = 0; i < length; i++) {
        if (strcmp(film[i].genre, f_genre) == 0) {
            cout << "Жанр " << f_genre << " находится в структуре - film" << i+1 << "\n";
        }
    }
    cout << "---\n";
}
void producerSearch(videoshop film[], int length, const char* f_producer) {
    for (int i = 0; i < length; i++) {
        if (strcmp(film[i].producer, f_producer) == 0) {
            cout << "Режисер " << f_producer << " находится в структуре - film" << i+1 << "\n";
        }
    }
    cout << "---\n";
}

void mPopular(videoshop film[], int length, const char* f_genre)
{
    float* massive = new float[length];
    for (int i = 0; i < length; i++)
    {
        if (strcmp(film[i].genre, f_genre) == 0)
        {
            massive[i] = film[i].rating;
        }
    }
    float max = massive[0]; 
    length = sizeof(massive)/sizeof(massive[0]);

    for (int i = 1; i < length; i++) {
        float el = massive[i];
        if (el > max) {
            max = el; 
        }
    }
    for (int i = 0; i < length; i++) {
        if (film[i].rating == max){
            cout << "Самый популярный фильм в жанре " << film[i].genre << " - " << film[i].name << "\n";
        }
    }
    cout << "---\n";
    delete[] massive;    
}

void show(videoshop film[], int length)
{   
    for (int i = 0; i < length; i++){
        cout << "name - " << film[i].name << "\n";
        cout << "producer - " << film[i].producer << "\n";
        cout << "genre - " << film[i].genre << "\n";
        cout << "rating - " << film[i].rating << "\n";
        cout << "cost - " << film[i].cost << "\n";
        cout << "-----" << "\n";
    }
    
}
int main()
{
    videoshop film1 = {"Продавцы боли", "Дэвид Йейтс", "драма", 6.5, 15.99};
    videoshop film2 = {"Без обид", "Джин Ступницки", "комедия", 6.4, 5.99};
    videoshop film3 = {"Внутри", "Василис Кацупис", "драма", 5.9, 10.99};
    const int length = 3;
    videoshop massive[length] = {film1, film2, film3};

    cout << "------\n";
    //Задание 1
    nameSearch(massive,length, "Без обид");
    //Задание 2
    genreSearch(massive,length, "драма");
    //Задание 3
    producerSearch(massive,length, "Василис Кацупис");
    //Задание 4
    mPopular(massive,length, "драма");
    //Задание 5
    show(massive,length);

    return 0;
}