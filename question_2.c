#include <stdio.h>
#include <string.h>

int main()
{
    int sub1 , sub2, sub3;

    printf("Enter marks:");
    scanf("%d %d %d", &sub1, &sub2, &sub3);


//use the OR || operator


    if( sub1 < 32 || sub2 < 32 )
    {
        printf("fail");
    }else if( sub2 < 32 || sub3 < 32)
    {
        printf("fail");
    }else if( sub1 < 32 || sub3 < 32)
    {
        printf("fail");
    }else 
    {
        printf("pass");
    }
 
 /* the 40% average pass mark does not need to be included 
*/
    return 0;
}