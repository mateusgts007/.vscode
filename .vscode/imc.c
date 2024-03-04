#include <stdio.h>
#include <stdlib.h>
#include <math.h> //////////****************including libraries*************//////////

int main()
{ //////////****************start of code*************//////////

    float height, weight, bmi; //////////**********declaring the variables*************//////////

    printf("please enter your height (cm):\n"); //////*******asking for the height*************////////
    scanf("%f", &height);                       //////***reading the informed information and keeping in the variable height****///////

    printf("please enter your weight (kg):\n"); //////*******asking for the weight*************////////
    scanf("%f", &weight);                       //////****reading the informed information and keeping in the variable weight***///////

    height /= 100; //////**transforming the height in meters for centimeters *****///////

    bmi = weight / (height * height); //////** calculating the bmi*****///////

    if (bmi < 18.5)
    {                                                               //////***informing the condition tha'll be executed****///////
        printf("you are underweight and your bmi is: %.2f\n", bmi); //////****printing in the screen the message****///////
    }

    else if (bmi >= 18.5 && bmi < 25)
    {                                                                        //////***informing the condition tha'll be executed****///////
        printf("you are in ideal rate weight and your bmi is: %.2f\n", bmi); //////****printing in the screen the message****///////
    }

    else if (bmi >= 25 && bmi <= 30)
    {                                                                 //////***informing the condition tha'll be executed****///////
        printf("you are in overweight and your bmi is: %.2f\n", bmi); //////****printing in the screen the message****///////
    }

    else if (bmi >= 30 && bmi <= 35)
    {                                                                             //////***informing the condition tha'll be executed****///////
        printf("beware, you are in obesity type 1 and your bmi is: %.2f\n", bmi); //////****printing in the screen the message****///////
    }

    else if (bmi >= 35 && bmi <= 40)
    {                                                                             //////***informing the condition tha'll be executed****///////
        printf("beware, you are in obesity type 2 and your bmi is: %.2f\n", bmi); //////****printing in the screen the message****///////
    }

    else if (bmi >= 40)
    {                                                                                 //////***informing the condition tha'll be executed****///////
        printf("BEWARE!!!!! you are in obesity type 3 and your bmi is: %.2f\n", bmi); //////****printing in the screen the message****///////
    }

    return 0; //////////**************end of the code***********///////
}