#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
        long rows, coef = 1, space, i, j;
        if(argc < 2) { //only arg is program name
                printf("\nEnter the number of rows : ");
                scanf("%ld",&rows);
                printf("\n");
        } //todo add case for only printing a range of rows
        else {
                rows = atoi(argv[1]);
                if(rows == 0) return -1;
        }
        for(i=0; i<rows; i++){
                for(j=0; j <= i; j++){
                        if (j==0 || i==0)
                                coef = 1;
                        else
                                coef = coef*(i-j+1)/j;
                        printf("%ld ", coef);
                }
                printf("\n\n");
        }
        return 0;
}
