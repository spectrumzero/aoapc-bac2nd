// UVa272 Tex Quotes
// Rujia Liu
#include <stdio.h>
int main() {
  freopen("input/272r.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int c, q = 1;
  while ((c = getchar()) != EOF) {
    if (c == '"') {
      printf("%s", q ? "``" : "''");
      q = !q;
    } else
      printf("%c", c);
  }
  return 0;
}
