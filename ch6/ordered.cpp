#include <cstdio>
#include <cstdint>
#include <concepts>

struct Goblin{};

template<typename T>
concept Equal =
    requires(T a, T b) {
        { a == b } -> std::convertible_to<bool>;
        { a != b } -> std::convertible_to<bool>;
    };


template <typename T>
concept Ordered =
    Equal<T> &&
    requires(T a, T b) {
        { a <= b } -> std::convertible_to<bool>;
        { a < b } -> std::convertible_to<bool>;
        { a > b } -> std::convertible_to<bool>;
        { a >= b } -> std::convertible_to<bool>;
    };

template <Ordered T>
size_t index_of_minimum(T* x, size_t length) {
  size_t min_index{};
  for(size_t i{ 1}; i<length; i++) {
    if(x[i] < x[min_index]) min_index = i;
  } 
  return min_index;
};

int main() {
  int x1[] { -20, 0, 100, 400, -21, 5123 };
  printf("%zu\n", index_of_minimum(x1, 6));
 
  unsigned short x2[] { 42, 51, 900, 400 };
  printf("%zu\n", index_of_minimum(x2, 4));

  Goblin x3[] { Goblin{}, Goblin{} };
//   index_of_minimum(x3, 2);
}
