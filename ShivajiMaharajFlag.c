/*
Contributed by - Prajakta N
*/

#include <graphics.h>
#include <stdio.h>

int main() {

  int i, j, row, in, r;
  int gd = DETECT, gm, color;

  initgraph(&gd, &gm, "C:\\TC\\BGI");

  scanf("%d", &row);
  setcolor(12);
  {
    {
      for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++)
          printf("1");
        printf("\n");
      }

      {
        for (in = 1; in <= row + 1; in++)
          printf("*");
        printf("\n");
      }
    }
    setcolor(15);
    for (r = 1; r <= row * 2; r++) {
      printf("|\n");
    }
  }
}
