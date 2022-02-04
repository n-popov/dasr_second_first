#include <iostream>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "Date.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    Date date(14, 02, 2022);
//    std::cout << date;


    // а внутри области видимости if-а
//    if (true) int a = 5;
//    std::cout << a;

    // greatest common divisor
//    std::cout << std::gcd(25, 40);

    std::vector<int> data{5, 6, 7, -6, 7, -42, 255};
    std::vector<int> positive;
    std::copy_if(data.begin(), data.end(), std::back_inserter(positive),
                 [](auto elem){return elem > 0;});
    std::copy(positive.begin(), positive.end(),
              std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
