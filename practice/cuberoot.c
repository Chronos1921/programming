#include<stdio.h>
#include<math.h>
int main()
{
    float high,low,guess;
    float epsilon=0.01;
    float cube;
    int count=0;
    printf("Enter a Number:-");
    scanf("%f",&cube);
    low=0;
    high=cube;
    guess=(high+low)/2;
    while ((pow(guess,3)-cube)>=epsilon)
    {
        
        if (pow(guess,3)>cube)
        {
            high=guess;
        }
        else
        {
            low=guess;
        }
        guess=(high+low)/2;
        count++;
    }
    printf("The cube Root of %.2f is %.5f and count=%d",cube,guess,count);
    
}
