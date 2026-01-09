#include "Date.h"
#include <iostream>

Date::Date() : month_(0), day_(0), year_(0) {}

Date::Date(int day, int month, int year)
    : month_ (month), day_ (day), year_ (year) {}

int Date::month() const {
    return month_;
}
int Date::day() const {
    return day_;
}
int Date::year() const {
    return year_;
}

void Date::set_month(int month) {
    month_ = month;
}
void Date::set_day(int day) {
    day_ = day;
}
void Date::set_year(int year) {
    year_ = year;
}

void Date::print() const {
    std::cout << month_ << "/" << day_ << "/" << year_ << std::endl;
}

