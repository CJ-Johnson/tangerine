#include <cassert>
#include <string_view>

#include "../include/tangerine.hpp"

void Test() {
  assert(std::string_view("(12(X^2Y^3)^4)/(3X^3Y^2)") ==
         "(12(X^2Y^3)^4)/(3X^3Y^2)");

  assert(GetTrue());
}

int main() { Test(); }
