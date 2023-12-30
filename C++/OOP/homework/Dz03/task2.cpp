#include <iostream>


using namespace std;

/*
2) Создаём приложение "Телефонная книга".
В предыдущем ДЗ был создан класс "Контакт". Создайте динамический массив объектов типа "Контакт".
Напишите функцию для вывода всех контактов на экран, функцию для добавления к этому массиву одного контакта
и функцию для удаления одного контакта из массива объектов.
*/

class Contact
{
    char* full_name;
    int home_phone;
    int work_phone;
    int mobile_phone;
    char* information;

public:
    Contact()
    {
        full_name = nullptr;
        home_phone = 0;
        work_phone = 0;
        mobile_phone = 0;
        information = nullptr;
    }
    Contact(const char *name, int h_ph, int w_ph, int m_ph, const char *inf)
    {
        full_name = new char[strlen(name) + 1];
        strcpy(full_name, name); // мой компилятор не видит strcpy_s

        home_phone = h_ph;
        work_phone = w_ph;
        mobile_phone = m_ph;

        information = new char[strlen(inf) + 1];
        strcpy(information, inf);
    }

    inline const char* getFullName() { return full_name; }
    inline int getHomePhone() { return home_phone; }
    inline int getWorkPhone() { return work_phone; }
    inline int getMobilePhone() { return mobile_phone; }
    inline const char* getInformation() { return information; }

    inline void displayInfo() {
            cout << "Name: " << full_name << "\n"
                  << "Home Phone: " << home_phone << "\n"
                  << "Work Phone: " << work_phone << "\n"
                  << "Mobile Phone: " << mobile_phone << "\n"
                  << "Information: " << information << "\n";
    }

    ~Contact()
    {
        delete[] full_name;
        delete[] information;
    }
};
// 1 задание
void mc_output(Contact* massive, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "-----------------\n";
        massive[i].displayInfo();
    }
}
// 2 задание
void add_contact(Contact* massive,int size, Contact obj)
{
    Contact* newMassive = new Contact[size + 1];

    for (int i = 0; i < size; ++i) {
        newMassive[i] = massive[i];
    }
    delete[] massive;
    newMassive[size] = obj;
    size++;
    massive = newMassive;
}
// 3 задание
// удаляет последний елемент массива
void delete_contact(Contact* massive,int size)
{
    Contact* newMassive = new Contact[size - 1];

    for (int i = 0; i < size; ++i) {
        newMassive[i] = massive[i];
    }
    delete[] massive;
    size--;
    massive = newMassive;
}
int main()
{
    int buffer = 3;
    Contact* massive = new Contact[buffer];

    massive[0] = Contact("Sergey", 234232342,34234234,5656466,"Local");
    massive[1] = Contact("Max", 1423256456,23454334,66787966,"HWLL");
    massive[2] = Contact("Roma", 42327654,129230987,46566556,"I like pizza");

    //mc_output(massive, buffer);

    //Contact obj("Vova",958345211,888900098,34561239,"POP");
    //add_contact(massive, buffer, obj);

    //delete_contact(massive, buffer);

    delete[] massive;
    return 0;
}