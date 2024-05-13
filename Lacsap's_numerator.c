/* Lacsap's numerators for desmos */
#include <stdio.h>

int main(){
    int y, lastRow;

    printf("Please enter number of rows: ");
    scanf("%i", &lastRow);

    for (int row = 1; row <= lastRow; row++) {
        y = (row*(row+1)) / 2;
        printf("(%i, %i)\n", row, y);
    }

    return 0;
}
