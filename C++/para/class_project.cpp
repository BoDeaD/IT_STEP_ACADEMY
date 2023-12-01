/*
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
//#include <io.h>
#include <stdio.h>
#include <ctype.h>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    const char* path = "myText.txt";
    char findChar;
    int wordCounter = 0;

    cout << "Enter the first symbol of the words to count: ";
    cin >> findChar;

    FILE* myFile;

    fopen_s(&myFile, path, "r");
    if (myFile == NULL)
    {
        cout << "Can`t open the file" << endl;
        return 1;
    }

    int ch;
    bool isWord = true;
    while ((ch = fgetc(myFile))!=EOF)
    {
        if (ch == ' '  ch == '.'  ch == ','  ch == '!'  ch == '?' || ch == ':')
            isWord = true;
        else if (isWord && tolower(ch) == tolower(findChar))
        {
            wordCounter++;
            isWord = false;

        }
    }
    fclose(myFile);

    printf("The number of words, starting with %c: %d", findChar, wordCounter);
    /*
     //char ch = 'A';
    //cout << (char)tolower(ch);


    struct _finddata_t fileinfo;
    char str[200] = "C:\\examples\\*.txt";

    long done = _findfirst(str, &fileinfo);
    if (done == -1)
        cout << "Not found!" << endl;
    else
        cout << fileinfo.name;
    */
