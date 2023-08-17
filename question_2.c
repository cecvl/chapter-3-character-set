#include <stdio.h>
#include <string.h>

int main()
{
    int sub1 , sub2, sub3, averagemarks;
    
    printf("Enter marks of 3 subjects: \n");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    
    averagemarks = (sub1 + sub2 + sub3)/3;

    if( averagemarks >= 40)
    {  
    if( sub1 < 32 || sub2 < 32 )
    {
        printf("fail [low subject mark]");
    }else if( sub2 < 32 || sub3 < 32)
    {
        printf("fail [low subject mark]");
    }else if( sub1 < 32 || sub3 < 32)
    {
        printf("fail [low subject mark]");
    }else 
    {
        printf("pass");
    }
    }else 
    {
        printf("fail [low average marks]");
    }
    return 0;
}
