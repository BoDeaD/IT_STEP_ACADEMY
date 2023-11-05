#include <iostream>

using namespace std;

struct music{
    int volume;
    int reverb;
    char date[12];
    char author[12];
};

int main()
{
    music song = {100,15,"23.04.2077","P"};

    cout << "volume - " << song.volume << "\n";
    cout << "reverb - " << song.reverb << "\n";
    cout << "date - " << song.date << "\n";
    cout << "author - " << song.author << "\n";
}