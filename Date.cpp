//
// Created by Nikita on 04.02.2022.
//

#include "Date.h"
#include <iostream>
#include <iomanip>

Date::Date(int day, int month, int year) {
    setDay(day);
    setMonth(month);
    setYear(year);
}

void Date::setDay(int day) {
    if (day <= 31 && day >= 1) this->day = day;
}

void Date::setMonth(int month) {
    if (month <= 12 && month >= 1) this->month = month;
}

void Date::setYear(int year) {
    this->year = year;
}


std::ostream& operator<<(std::ostream& out, Date date) {
    out << std::setfill('0') << std::setw(2) <<
        date.day << '.' << std::setw(2)
        << date.month << '.' << date.year;
    return out;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

