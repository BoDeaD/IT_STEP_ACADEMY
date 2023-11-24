#include <iostream>
#include <string>

const int MAX_ENTRIES = 100;

class PhoneBook {
public:
    PhoneBook(int size) : size(size) {
        names = new std::string[size];
        phones = new std::string[size];
    }

    ~PhoneBook() {
        delete[] names;
        delete[] phones;
    }

    // Функция для поиска по имени
    void searchByName(const std::string& name) {
        for (int i = 0; i < size; i++) {
            if (names[i] == name) {
                std::cout << "Найдено: " << name << " - " << phones[i] << std::endl;
                return;
            }
        }
        std::cout << "Имя не найдено в телефонной книге." << std::endl;
    }

    // Функция для поиска по номеру телефона
    void searchByPhone(const std::string& phone) {
        for (int i = 0; i < size; i++) {
            if (phones[i] == phone) {
                std::cout << "Найдено: " << names[i] << " - " << phone << std::endl;
                return;
            }
        }
        std::cout << "Номер телефона не найден в телефонной книге." << std::endl;
    }

    // Функция для ввода данных
    void inputData() {
        for (int i = 0; i < size; i++) {
            std::cout << "Введите имя #" << i + 1 << ": ";
            std::cin >> names[i];
            std::cout << "Введите номер телефона #" << i + 1 << ": ";
            std::cin >> phones[i];
        }
    }

    // Функция для изменения данных
    void modifyData(int index) {
        if (index >= 0 && index < size) {
            std::cout << "Введите новое имя для записи #" << index + 1 << ": ";
            std::cin >> names[index];
            std::cout << "Введите новый номер телефона для записи #" << index + 1 << ": ";
            std::cin >> phones[index];
            std::cout << "Данные изменены успешно." << std::endl;
        } else {
            std::cout << "Индекс записи недействителен." << std::endl;
        }
    }

private:
    int size;
    std::string* names;
    std::string* phones;
};

int main() {
    int phoneBookSize;
    std::cout << "Введите размер телефонной книги: ";
    std::cin >> phoneBookSize;

    // Создаем телефонную книгу
    PhoneBook phoneBook(phoneBookSize);

    // Вводим данные в телефонную книгу
    phoneBook.inputData();

    // Поиск по имени
    std::string searchName;
    std::cout << "Введите имя для поиска: ";
    std::cin >> searchName;
    phoneBook.searchByName(searchName);

    // Поиск по номеру телефона
    std::string searchPhone;
    std::cout << "Введите номер телефона для поиска: ";
    std::cin >> searchPhone;
    phoneBook.searchByPhone(searchPhone);

    // Изменение данных
    int indexToModify;
    std::cout << "Введите индекс записи для изменения данных: ";
    std::cin >> indexToModify;
    phoneBook.modifyData(indexToModify - 1);

    return 0;
}