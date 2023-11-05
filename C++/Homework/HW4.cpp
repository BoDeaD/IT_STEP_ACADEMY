#include <iostream>

using namespace std;

enum types {bird, beast, human};
union characteristic
{
    float flySpeed;
    bool artiodactyl;
    int  iq; 
};
struct livingEntity
{
    float speed;
    types style;
    char color[20];
    characteristic feature;
};
// Задание 1
void enterInformation(livingEntity& entity)
{
    cout << "Enter information in speed field - " << "\n";
    cin >> entity.speed;

    cout << "Enter information in type field(bird, beast, human) - " << "\n";
    int style;
    cin >> style;
    entity.style = static_cast<types>(style);

    cout << "Enter information in color field - " << "\n";
    cin >> entity.color;

    if (entity.style == bird){
        cout << "Enter information in flySpeed field - " << "\n";
        cin >> entity.feature.flySpeed;
    }
    else if (entity.style == beast){
        cout << "Enter information in artiodactyl field - " << "\n";
        int artiodactyl;
        cin >> artiodactyl;
        entity.feature.artiodactyl = static_cast<bool>(artiodactyl);
    }
    else if (entity.style == human){
        cout << "Enter information in iq field - " << "\n";
        cin >> entity.feature.iq;
    }
}

void printInformation(livingEntity entity)
{
    cout << "Speed: " << entity.speed << "\n";
    cout << "Style: " << entity.style << "\n";
    cout << "Color: " << entity.color << "\n";

    if (entity.style == bird) {
        cout << "Fly Speed: " << entity.feature.flySpeed << "\n";
    } 
    else if (entity.style == beast) {
        cout << "Artiodactyl: " << entity.feature.artiodactyl << "\n";
    } 
    else if (entity.style == human) {
        cout << "IQ: " << entity.feature.iq << "\n";
    }
}
// Задание 2

void editData(livingEntity entity[], int length)
{
    int index;
    cout << "Enter the index of the entity you want to edit: ";
    cin >> index;

    if (index < 0 || index >= length) {
        cout << "Invalid index." << endl;
        return;
    }

    int response;
    cout << "What do you want to change (1 - Speed, 2 - Style, 3 - Color): ";
    cin >> response;

    switch (response)
    {
    case 1:
        cout << "Enter new speed: ";
        cin >> entity[index].speed;
        break;
    case 2:
        cout << "Enter new style (0 for bird, 1 for beast, 2 for human): ";
        int style;
        cin >> style;
        entity[index].style = static_cast<types>(style);
        break;
    case 3:
        cout << "Enter new color: ";
        cin >> entity[index].color;
        break;
    default:
        cout << "Invalid choice." << endl;
    }
}
void printAllInformation(livingEntity entity[],int length)
{
    cout << "Печать всего списка - \n";
    for (int i = 0; i < length; i++)
    {
        printInformation(entity[i]);
        cout << "-----\n";
    }
}
void characteristicSearch(livingEntity entity[], int length) {
    int in_style;
    cout << "Enter style (0 for bird, 1 for beast, 2 for human): ";
    cin >> in_style;

    if (in_style < 0 || in_style > 2) {
        cout << "Invalid style entered.\n";
        return;
    }

    if (in_style == bird) {
        float in_flySpeed;
        cout << "Enter flySpeed: ";
        cin >> in_flySpeed;

        for (int i = 0; i < length; i++) {
            if (entity[i].style == in_style && entity[i].feature.flySpeed == in_flySpeed) {
                printInformation(entity[i]);
            }
        }
    } else if (in_style == beast) {
        bool in_artiodactyl;
        cout << "Enter artiodactyl (0 for false, 1 for true): ";
        cin >> in_artiodactyl;

        for (int i = 0; i < length; i++) {
            if (entity[i].style == in_style && entity[i].feature.artiodactyl == in_artiodactyl) {
                printInformation(entity[i]);
            }
        }
    } else if (in_style == human) {
        int in_iq;
        cout << "Enter IQ: ";
        cin >> in_iq;

        for (int i = 0; i < length; i++) {
            if (entity[i].style == in_style && entity[i].feature.iq == in_iq) {
                printInformation(entity[i]);
            }
        }
    }
}
int main()
{
    /*
    // Задание 1
    livingEntity pigeon = {};
    enterInformation(pigeon);
    printInformation(pigeon);
    */
    // Задание 2
    int length = 10;
    livingEntity entities[length]; 

    for (int i = 0; i < length; i++) {
        cout << "Enter information for entity " << i + 1 << ":\n";
        enterInformation(entities[i]);
    }
    //editData(entities,length)
    //printAllInformation(entities,length);
    //characteristicSearch(entities, length);

    return 0;
}