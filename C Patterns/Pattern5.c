#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print rows
    for(i = 1; i <= n; i++) {
        // Loop to print spaces
        for(j = n; j > i; j--) {
            printf("  ");
        }
        // Loop to print asterisks
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
/* Output:

Enter the number of rows: 4
       * 
     * * 
   * * * 
 * * * *
                    */