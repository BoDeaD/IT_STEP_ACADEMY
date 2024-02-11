#include <iostream>

using namespace std;

/*
Создайте класс Date, который содержит информацию о дате (день, месяц, год).
С помощью перегрузки операторов определите операцию разности двух дат
(результат - это количество дней между датами), а также операцию увеличения даты
на определенное количество дней.
*/

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    int operator-(const Date& other) const {
        int days1 = year * 365 + month * 30 + day;
        int days2 = other.year * 365 + other.month * 30 + other.day;
        return days1 - days2;
    }

    Date operator+(int days) const {
        int days1 = year * 365 + month * 30 + day;
        days1 += days;
        int newYear = days1 / 365;
        int newMonth = (days1 % 365) / 30;
        int newDay = (days1 % 365) % 30;
        return Date(newDay, newMonth, newYear);
    }

    int get_day()
    {
        return day;
    }
    int get_month()
    {
        return month;
    }
    int get_year()
    {
        return year;
    }

    void printDate()
    {
        cout << "day - " << get_day() << " | month - " << get_month() << " | year - " << get_year() << "\n";
    }
};

int main()
{
    Date date1(10, 1, 2022);
    Date date2(5, 1, 2022);

    int diff = date1 - date2;
    cout << "Difference in days: " << diff << endl;

    Date date3 = date1 + 5;
    cout << "Date after adding 5 days: ";
    date3.printDate();

    return 0;

}