#include <iostream>
#include <list>

using namespace std;

/*1. Ввести число, и определить - чётное оно, или нет (либо иф-элс, либо тернарка, % 2 == 0)*/
void func1()
{
    int num;
    cout << "-\nEnter number - ";
    cin >> num;

    string result = (num % 2 == 0) ? "чётное":"нечётное";
    cout << result << "\n";
}

/*2. Ввести три числа и найти наименьшее среди них.*/
void func2()
{
    list<int> num; // инициализирую список 
    for (int i = 0; i < 3; i++){ // в цикле записываю в список 3 числа 
        int number;
        cout << "Enter number - " << "\n";
        cin >> number;
        num.push_back(number);
    }
    num.sort(); // сортирую( по умолчаниею от меньшего к большему )
    cout << num.front() << '\n';

}
int main()
{
    //func1();
    func2();
}