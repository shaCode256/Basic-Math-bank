#include <stdio.h>
#include "myMath.h"
#define E 2.71828

int main()
{
    double num;
    printf("Please insert a real number: \n");
    scanf("%lf", &num);
    printf("Great! you entered %lf \n",num);
    int rounum = (int)(num);
    double result;
    result= sub(add(Exponent(rounum),Power(num,3)),2);
    printf("\t This function will calculate f(x) = e^x + x^3 - 2 \n");
    printf("\t The value of f(x) = e^x + x^3 − 2 at the point  %0.4f \n",num);
    printf("\t is  %0.4f  \n",result);
    result= add(mul(num, 3),mul(Power(num,2),2));
    printf("\t This function will calculate f(x) =  3x + 2X^2 \n");
    printf("The value of f(x) = 3x + 2X^2 at the point %0.4f \n",num);
    printf("\t is  %0.4f  \n",result);
    result = sub(div(mul(Power(num,3),4),5),mul(num,2));
    printf("\t This function will calculate f(x) =(4x^3)/5 -2x \n");
    printf("The value of f(x) = (4x^3)/5 -2x  at the point %0.4f \n",num);
    printf("\t is %0.4f \n",result);
    printf("That's it for this program :) \n");
   // printf("Please enter any key and press enter to close this window/ end this run");
    //scanf("%lf", &num);  //for this to not exit right after entering a number
    return 0; //meaning this was successful
}
