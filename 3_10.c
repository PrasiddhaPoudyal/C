#include <stdio.h>
void main() {
  int r, c, a[100][100], b[100][100], i, j, sum[100][100], diff[100][100], prod[100][100];
  printf("Enter the number of rows(between 1 and 100): ");  scanf("%d", &r);
  printf("Enter the number of columns(between 1 and 100):");scanf("%d", &c);
  printf("\nEnter elements of 1st matrix:\n");
            for (i = 0; i < r; ++i) for (j = 0; j < c; ++j) {
                printf("Enter element a%d%d: ", i + 1, j + 1); scanf("%d", &a[i][j]); }
  printf("Enter elements of 2nd matrix:\n");
            for (i = 0; i < r; ++i) for (j = 0; j < c; ++j) {
                printf("Enter element b%d%d: ", i + 1, j + 1);scanf("%d", &b[i][j]); }
            for (i = 0; i < r; ++i) for (j = 0; j < c; ++j) {
                sum[i][j] = a[i][j] + b[i][j];
                diff[i][j] = a[i][j] - b[i][j];
                prod[i][j] = a[i][j] * b[i][j];}
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) printf("\n");
    }
  printf("\nDifference of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", diff[i][j]);
      if (j == c - 1) printf("\n");
    }
  printf("\nProduct of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", prod[i][j]);
      if (j == c - 1) printf("\n");
    }
}

