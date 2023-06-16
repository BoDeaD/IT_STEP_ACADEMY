#include <iostream>

using namespace std;

/*
3. Написать программу, которая предлагает пользователю ввести номер дня недели,
 и в ответ показывает название этого дня (например, это суббота).Решить с использованием if и switch.
*/
void func1()
{
    int num;
    cout << "-\nВведи номер дня недели - ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    
    default:
        break;
    }
}
/*
10. Написать игру
"0, счастливчик!".
. На экране консоли по очереди появляются вопросы, и варианты ответов. Неправильный выбор - игра
окончена. Правильный ответ - переходим к следующему вопросу. Если все ответы правильные
конце
выводится сообщение о победе.
достаточно будет 5 вопросов.
*/
int func10()
{
    int choise;
    cout << "-\nGame: 0, счастливчик!\n";
    // 1
    cout << "1. Сколько пальцев на руке у обычного человека";
    cout << "\n1. Пять;          2. Десять;\n3. Шесть;           4. Три;";
    cout << "\nEnter answer - ";
    cin >> choise;
    if (choise != 1){
        return 0;
    }
    else {
        cout << "\nCool!\n";
    }
    // 2
    cout << "2. Кто отец Олександа Серегеевича Пушкина";
    cout << "\n1. Кто это вообще знает?;          2. Андрей;\n3. Маша;           4. Сергей;";
    cout << "\nEnter answer - ";
    cin >> choise;
    if (choise != 4){
        return 0;
    }
    else {
        cout << "\nCool!\n";
    }
    // 3
    cout << "3. Инкапсуляция это сокрытие?";
    cout << "\n1. Да;          2. Нет;\n3. Выход ТАМ :);           4. Инкапсуляция - механизм языка, позволяющий объединить данные и методы, работающие с этими данными в единый объект, и скрыть детали реализации от пользователя.";
    cout << "\nEnter answer - ";
    cin >> choise;
    if (choise != 4){
        return 0;
    }
    else {
        cout << "\nCool!\n";
    }
    // 4
    cout << "4. В каком фильме мужик носит красный костюм, что-бы не видели его кровь";
    cout << "\n1. Рассомаха;          2. Мстители;\n3. Дедпул;           4. Афера столетия;";
    cout << "\nEnter answer - ";
    cin >> choise;
    if (choise != 3){
        return 0;
    }
    else {
        cout << "\nCool!\n";
    }
    // 5
    cout << "5. в каком году отменили крепостное право";
    cout << "\n1. 1913;          2. 1868;\n3. 1861;           4. 1898;";
    cout << "\nEnter answer - ";
    cin >> choise;
    if (choise != 3){
        cout << "\nFalse :(\n";
        return 0;
    }
    else {
        cout << "\nYOU WIN!!!\n";
        return 0;
    }

    return 0;
}
int main()
{
    //func1();
    //func10();
}