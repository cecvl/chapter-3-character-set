#include <stdio.h>

/*Function Declaration
Declare 3 functions; each function will handle one tax bracket
*/
//5% tax bracket
double taxcalculate5(float income)
{
    float result;
    result = income * 0.05; 

    return result; 

}

//20% tax bracket
double taxcalculate20(float income)
{
    float result;
    result = income * 0.2; 

    return result; 

}

//30% tax bracket
double taxcalculate30(float income)
{
    float result;
    result = income * 0.3; 

    return result; 

}


//Body

int main()
{
    float income_earned, tax_owed;

    printf("Enter income earned:\n ");
    scanf("%f", &income_earned);

    
    if (income_earned < 2.5 )
    {
        printf("No tax to be paid");
    }
    else if (income_earned >= 2.5 && income_earned <= 5.0 )
    {
         printf("%f L", taxcalculate5(income_earned));
    }else if( income_earned >5.0 && income_earned <= 10.0)
    {
        printf("%f L", taxcalculate20(income_earned));
    }else if ( income_earned > 10.0)
    {
        printf("%f L", taxcalculate30(income_earned));
    } else 
    {
        printf("Enter valid income.");
    }

    return 0;
}
/*


*/