#include <stdio.h>
int main() 
{
    char l, w[50];
    char sen[100];
    scanf("%c", &l);
    scanf("%s\n", &w);
    scanf("%[^\n]s", &sen);
    printf("%c \n%s \n%s", l, w, sen);
    return 0;
}