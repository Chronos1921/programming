#include <stdio.h>
int main()
{
    char s1[50], s2[50];
    int i=0;
    printf("Enter a string :");
    gets(s1);
    printf("Enter another string :");
    gets(s2);
    while( s1[i] == s2[i] && s2[i] != '\0')
    {i++;
        
    }
    if (s1[i] > s2[i] || s2[i] > s1[i])
        {
            printf("The two strings are not Same ");
        }
        else
        {
            printf("The two strings are same");
        }
    return 0;
}