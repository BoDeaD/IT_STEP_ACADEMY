#include <iostream>
#include <cstring> 

using namespace std;
/*
1) Использовать в приложении "Телефонная книга" (см. предыдущие ДЗ) делегирование конструкторов.
*/

class Contact
{
    char* full_name;
    int home_phone;
    int work_phone;
    int mobile_phone;
    char* information;

public:
    Contact(): Contact(" ", 0, 0, 0, " ") {}

    Contact(char *name, int h_ph, int w_ph, int m_ph, char *inf)
    {
        full_name = new char[strlen(name) + 1];
        strcpy(full_name, name); 

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