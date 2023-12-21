#include <iostream>
#include <cstring> 

using namespace std;
/*
Создайте класс «Контакт», который в дальнейшем будет использоваться в приложении "Телефонная книга".
Необходимо хранить данные об абоненте (ФИО, домашний телефон, рабочий телефон, мобильный телефон,
дополнительная информация о контакте) внутри соответствующего класса. 
Наполните класс переменными-членами, конструкторами, inline-функциями-членами, реализуйте деструктор. 
Обязательно необходимо выделять динамически память под ФИО
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
    Contact(char *name, int h_ph, int w_ph, int m_ph, char *inf)
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

int main()
{
    Contact profile1("Шохин Сергей Сергеевич", 342341344, 234324142 ,234241432, "I love pizza");
    profile1.displayInfo();

    return 0;
}