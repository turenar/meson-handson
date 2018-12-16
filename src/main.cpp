#include <iostream>
#include "libperfectcalc/plus.hpp"

int main() {
    int lhs, rhs;
    std::cin >> lhs >> rhs;
    std::cout << plus(lhs, rhs) << std::endl;
}
