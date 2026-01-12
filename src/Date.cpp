#include "Date.h"
#include <iostream>
Date::Date(int day, int month, int year) {
    month_ = month;
    day_ = day;
    year_ = year;
}

void Date::print() const {
    std::cout << day_ << "/" << month_ << "/" << year_ << std::endl;
}

bool Date::is_date(int day, int month, int year) {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) ||(month == 9) || (month == 11)) && (day > 30)) return false;
    if ((year < 0)) return false;

    return true;
}


