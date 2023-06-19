template<typename T>
T square(T value) {
  return value * value;
}

int main() {
  char my_char{ 'O' };
  auto result = square(&my_char);
}
