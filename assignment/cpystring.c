#include <stdio.h>
int main()
{
    char s1[20], s2[20];
    int i;
    printf("Enter a string :  ");
        gets(s1);
    for (i = 0; s1[i] != '\0'; i++)

        s2[i] = s1[i];

            s2[i] = '\0';
    puts(s2);
    return 0;
}