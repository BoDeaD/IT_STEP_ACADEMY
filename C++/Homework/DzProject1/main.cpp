#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>

void encrypt(char* text) {
    while (*text) {
        if (isalpha(*text)) {
            char base = isupper(*text) ? 'A' : 'a';
            *text = static_cast<char>((*text - base + 3) % 26 + base);
        }
        ++text;
    }
}

int main() {
    FILE* inputFile = fopen("text.txt", "r");
    FILE* outputFile = fopen("encrypted_text.txt", "w");

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), inputFile) != nullptr) {
        encrypt(buffer);
        fprintf(outputFile, "%s", buffer);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
