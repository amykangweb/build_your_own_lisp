#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
  puts("Hello, world!");

  int add_together(int x, int y) {
    int result = x + y;
    return result;
  }

  int added = add_together(10, 18);
  printf("%d\n", added);

  typedef struct {
    float x;
    float y;
  } point;

  point p;
  p.x = 0.1;
  p.y = 10.0;

  float length = sqrt(p.x * p.x + p.y * p.y);

  printf("%.6f\n", length);

  return 0;
}
