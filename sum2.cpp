#include <stdio.h>
int sumOfDigits(int num);


int main()
{
    int num, sum;
    
    printf("input: ");
    scanf("%d", &num);
    
    sum = sumOfDigits(num);
    
    printf("output= %d",sum);
    
    return 0;
}
int sumOfDigits(int num)
{
    if(num == 0)
        return 0;
        
    return ((num % 10) + sumOfDigits(num / 10));
}
