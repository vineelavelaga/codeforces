#include <stdbool.h>
#include <stdio.h>

bool is_even(int n);
bool can_divide_watermelon(int w);

int main(int argc, char** argv) {
  int w = 0;
  scanf("%d", &w);
  if (can_divide_watermelon(w)) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}

bool is_even(int n) {
  int r = n % 2;
  return  (r == 0);
}

bool can_divide_watermelon(int w) {
  return is_even(w) && (w > 2);
}
