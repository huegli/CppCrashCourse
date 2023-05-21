#include <cstdio>

int add_one_to(int x)
{
    x++;
    return x;
}

struct Point {
  int x, y;
};

Point make_transpose(Point p)
{
  int tmp = p.x;
  p.x = p.y;
  p.y = tmp;
  return p;
}

int main()
{
  auto original = 1;
  auto result = add_one_to(original);
  printf("Original: %d, Result: %d\n", original, result);
  Point p{0,1};
  auto p2 = make_transpose(p);
  printf("P1: %d,%d, P2: %d,%d\n", p.x, p.y, p2.x, p2.y);
}

