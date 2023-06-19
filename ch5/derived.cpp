#include <cstdio>

struct BaseClass{};
struct DerivedClass : BaseClass{};
void are_belong_to_us(BaseClass& base) {}
void all_about_that(DerivedClass& derived) {}

int main() {
  BaseClass base;
  DerivedClass derived;
  are_belong_to_us(derived);
  // all_about_that(base);
}
