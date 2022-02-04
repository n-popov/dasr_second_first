#include <iostream>
#include <iomanip>
#include "Date.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Date date(14, 02, 2022);
    std::cout << date;
    // а внутри области видимости if-а
//    if (true) int a = 5;
//    std::cout << a;
    return 0;
}
