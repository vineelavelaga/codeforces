#include <stdio.h>

typedef long long unsigned int uint64_t; 

uint64_t num_tiles_required(uint64_t n, uint64_t a) {
  uint64_t n_div_a= n / a;
  uint64_t n_mod_a= n % a;
  if (n_mod_a == 0) {
    return n_div_a;
  } else {
    return n_div_a + 1UL;
  }
}

int main(int argc, char** argv) {
  uint64_t n = 0;
  uint64_t m = 0;
  uint64_t a = 0;
  scanf("%llu" , &n);
  scanf("%llu" , &m);
  scanf("%llu" , &a);
  uint64_t t_1 = num_tiles_required(n, a);
  uint64_t t_2 = num_tiles_required(m, a);
  uint64_t result = t_1 * t_2;
  printf("%llu\n", result);
  return 0;
}
