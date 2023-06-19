#include <cstdio>
#include <cstddef>
#include <type_traits>

template<typename T>
T mean(const T* values, size_t length) {
  static_assert(std::is_default_constructible<T>(), "Type must be default constructible.");
  static_assert(std::is_copy_constructible<T>(), "Type must be copy constructible.");
  static_assert(std::is_arithmetic<T>(), "Type must support addition and division.");
  static_assert(std::is_constructible<T, size_t>(), "Type must be constructible from size_.");
  T result{};
  for(size_t i{}; i<length; i++) {
    result += values[i];
  }
  return result / length;
}

int main() {
  const double nums_d[] { 1.0f, 2.0f, 3.0f, 4.0f };
  const auto result1 = mean(nums_d, 4);
  printf("double: %f\n", result1);

  const float nums_f[] { 1.0, 2.0, 3.0, 4.0 };
  const auto result2 = mean(nums_f, 4);
  printf("float: %f\n", result2);

  const size_t nums_c[] { 1, 2, 3, 4 };
  const auto result3 = mean(nums_c, 4);
  printf("size_t: %lu\n", result3);

  auto value1 = 0.0;
  auto value2 = 1.0;
  const double* values[] { &value1, &value2 };
  // mean(values, 2);
}
