#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

void func1(FILE* file) {
    size_t maxLength = 0;
    char buffer[256];

    while (fgets(buffer, sizeof(buffer), file) != nullptr) {
        size_t length = strlen(buffer);
        if (length > maxLength) {
            maxLength = length;
        }
    }

    rewind(file); // Перематываем файл на начало после чтения, чтобы использовать его вновь
    printf("Длина самой длинной строки: %zu\n", maxLength);
}

void func2(FILE* file, const string& targetWord) {
    string word;
    int count = 0;
    char buffer[256];

    while (fscanf(file, "%s", buffer) != EOF) {
        word = buffer;

        // Удаляем символы пунктуации с конца слова
        while (!isalnum(word.back())) {
            word.pop_back();
        }

        // Сравниваем слово с целевым словом (регистрозависимо)
        if (word == targetWord) {
            count++;
        }
    }

    printf("Слово '%s' встречается в файле %d раз(а).\n", targetWord.c_str(), count);
}

int main() {
    FILE* file = fopen("text.txt", "r");

    func1(file);
    // Перематываем файл на начало после чтения, чтобы использовать его вновь
    rewind(file);

    string targetWord;
    cout << "Введите слово для поиска: ";
    cin >> targetWord;

    func2(file, targetWord);

    fclose(file);

    return 0;
}
