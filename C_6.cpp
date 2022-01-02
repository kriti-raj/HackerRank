#include <stdio.h>


int main() {

    char arr[] = {'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine'};
    
    int t, n;
    scanf("%d, %d", &t, &n);
    
    for (int i=t; i<=n; i++) {
        if (i>=1 && i<=9) {
        printf(arr[i-1]);
        }
        else {
        if (i%2==0) {
        printf("even\n");
        }
        else {
        printf("odd\n");
        }
        }
    }
    
    return 0;
}