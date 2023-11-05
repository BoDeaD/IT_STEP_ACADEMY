#include <iostream>

using namespace std;

void addColumn(int**& massive,int &m1,int &m2, int position);
void deleteColumn(int**& massive, int& m1, int& m2, int columnToDelete);

int main()
{
    int m1 = 5, m2 = 5;
    int i, k = m2; 
    int** pXArr = new int* [m1];
    for (i = 0; i < m1; i++, k--) {    
        pXArr[i] = new int[k];
    }
    cout << "Standart massive -\n";
    for (i = 0; i < m1; i++)
    {
        for (k = 0; k < m2; k++)
        {
            pXArr[i][k] = 1;
            cout << pXArr[i][k] << " ";
        }
        cout << "\n";
    }
    cout << "-------\n";
    //Задание 1.
    addColumn(pXArr, m1,m2, 3);

    cout << "Func1 massive -\n";
    for (i = 0; i < m1; i++)
    {
        for (k = 0; k < m2; k++)
        {
            pXArr[i][k] = 1;
            cout << pXArr[i][k] << " ";
        }
        cout << "\n";
    }
    cout << "-------\n";
    //Задание 2.
    deleteColumn(pXArr, m1,m2, 2);

    cout << "Func2 massive -\n";
    for (i = 0; i < m1; i++)
    {
        for (k = 0; k < m2; k++)
        {
            pXArr[i][k] = 1;
            cout << pXArr[i][k] << " ";
        }
        cout << "\n";
    }
    cout << "-------\n";
    

    for (i = 0; i < m1; i++) {    
        delete[] pXArr[i];
    }
    delete[] pXArr;

    return 0;
}

void addColumn(int** &massive, int &m1, int &m2, int position) {
    if (position < 0 || position > m2 - 1) {
        cout << "Недопустимая позиция для вставки столбца." << endl;
        return;
    }

    int newCols = m2 + 1;
    int** newMassive = new int* [m1];

    for (int i = 0; i < m1; i++) {
        newMassive[i] = new int[newCols];
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < position; j++) {
            newMassive[i][j] = massive[i][j];
        }
        newMassive[i][position] = 1; 
        for (int j = position + 1; j < newCols; j++) {
            newMassive[i][j] = massive[i][j - 1];
        }
    }

    
    for (int i = 0; i < m1; i++) {
        delete[] massive[i];
    }
    delete[] massive;

    massive = newMassive;
    m2 = newCols;
}

void deleteColumn(int**& massive, int& m1, int& m2, int columnToDelete) {
    if (columnToDelete < 0 || columnToDelete >= m2) {
        cout << "Недопустимый номер столбца для удаления." << endl;
        return;
    }

    int newCols = m2 - 1;
    int** newMassive = new int* [m1];

    for (int i = 0; i < m1; i++) {
        newMassive[i] = new int[newCols];
    }

    for (int i = 0; i < m1; i++) {
        int newColIdx = 0; 
        for (int j = 0; j < m2; j++) {
            if (j != columnToDelete) {
                newMassive[i][newColIdx] = massive[i][j];
                newColIdx++;
            }
        }
    }

    for (int i = 0; i < m1; i++) {
        delete[] massive[i];
    }
    delete[] massive;

    massive = newMassive;
    m2 = newCols;
}
