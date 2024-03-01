#include<stdio.h>
int main()
{
    float h,w,bmi;
    printf("\t\t\t *****BMI*****\t\t\t\n");
    printf("Give a Height in C.M:");
    scanf("%f",&h);
    printf("Give a Weight in K.G:");
    scanf("%f",&w);
    bmi=w/((h*h)/10000);
    //printf("Your BMI Value =%f",bmi);
    if(bmi>1 && bmi<18.6)
    {
        printf("You BMI Value Is Average with %f",bmi);
    }
    else if(bmi>18.6 && bmi<24.9)
    {
         printf("You BMI Value Is Normal with %f",bmi);

    }
    else if(bmi>24.9)
    {
        printf("You BMI Value Is OverWeight with %f",bmi);

    }
    else
    {
        printf("!!!Error");
    }

}
