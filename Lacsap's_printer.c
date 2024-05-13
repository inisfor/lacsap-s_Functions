/* LACSAP'S PRINTER */
#include <stdio.h>

//Computes denominator using the formula for Lacsap's denominators
int computeDenominator(int n, int r){
    int denominator;

    denominator = (((n-r+1)*(n-r+1))-(n-r+1)+(r*(r+1))) / 2;
    return denominator;
}

//Computes numerator using the formula for Lacsap's numerators
int computeNumerator(int row){
    int numerator = (row*row +row) / 2;
    return numerator;
}

void printLacsap(int lastRow){
    int numerator, denominator;
    //Indexing rows from one until desired
    for (int row = 1; row <= lastRow; row++) {
        printf("\nRow %i: ", row);
        //Indexing from zero due to iterating for entries
        for (int entry = 0; entry <= row; entry++) {
            numerator = computeNumerator(row);
            denominator = computeDenominator(row, entry);
            if (numerator == denominator) {
                printf("1 ");
            } else {
                printf("%i/%i  ", numerator, denominator);
            }

        }
    }
}

int main(){
    int row;
    printf("Please enter the amount of rows here: ");
    scanf("%i", &row);
    printLacsap(row);

    return 0;
}
