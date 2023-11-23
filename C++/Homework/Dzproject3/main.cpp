#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
/*
Дан текстовый файл. 
Удалить из него последнюю строку. 
Результат записать в другой файл.
*/
void func1(FILE* inputFile, FILE* outputFile) {
    int numLines = 0;
    char buffer[256];

    while (fgets(buffer, sizeof(buffer), inputFile) != nullptr) {
        ++numLines;
    }

    if (numLines == 0) {
        cerr << "Файл пуст." << endl;
        return;
    }
    rewind(inputFile);

    for (int i = 0; i < numLines - 1; ++i) {
        if (fgets(buffer, sizeof(buffer), inputFile) != nullptr) {
            fputs(buffer, outputFile);
        }
    }

    cout << "Последняя строка удалена и записана в новый файл." << endl;
}
/*
Дан текстовый файл на 20 строк. 
Удалить из него каждую чётную строку. 
Результат записать в другой файл.
*/
void func2(FILE* inputFile, FILE* outputFile) {
    int lineNum = 1; // Нумерация строк начинается с 1
    char buffer[256];

    while (fgets(buffer, sizeof(buffer), inputFile) != nullptr) {
        if (lineNum % 2 != 0) {
            fputs(buffer, outputFile);
        }
        ++lineNum;
    }

    cout << "Чётные строки удалены и записаны в новый файл." << endl;
}
int main() {
    FILE* inputFile = fopen("text.txt", "r");

    FILE* outputFile = fopen("new_text.txt", "w");

    func1(inputFile, outputFile);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
