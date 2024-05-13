#include <stdio.h>

int main(){
    int x;
    int y;
    FILE *fp = NULL;

    fp = fopen("data.dat", "w+");

    for (int i = 0; i < 4; i++) {
        y = (x*(x+1)) / 2;
        fprintf(fp, "%d, %d\n", x, y);
        x++;
    }

    return 0;
}
