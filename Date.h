//
// Created by Nikita on 04.02.2022.
//


#ifndef DASR_SECOND_FIRST_DATE_H
#define DASR_SECOND_FIRST_DATE_H

#include <iostream>

class Date {
public:
    Date(int day, int month, int year);

    int getDay() const;

    int getMonth() const;

    int getYear() const;

    void setDay(int day);

    void setMonth(int month);

    void setYear(int year);

    friend std::ostream& operator<<(std::ostream&, Date);

private:
    int day, month, year;
};

#endif //DASR_SECOND_FIRST_DATE_H
