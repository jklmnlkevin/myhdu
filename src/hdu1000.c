#include <stdio.h>

int main() {
    int x;
    int y;
    
    while (scanf("%d%d", &x, &y) != EOF) {

      printf("%d\n", x + y);
    }
}
