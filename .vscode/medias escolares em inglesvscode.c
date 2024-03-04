#include <stdio.h>
#include <stdlib.h>



int main() //////// inicializating the code
{

 float note1,note2,note3,media; ////////////////////////////// declaring the variables

 printf("please put your grades: \n");  //////////// printing in the screen asking for the school grades
 scanf("%f%f%f",&note1,&note2,&note3); //////// informing that the three values are integer and should be stored in L1,L2,L3


 media= (note1+note2+note3)/3;  ////////////////// calculating the average media

 if (media >= 7){ ////////////////////////////// if the mean is greater than seven, show the message below

    printf("congratulations you are in average \n"); //// printing the message in the screen
 }

else {          ///////////////////////// if the condition above is false, print in the screen the message below
    printf("you're reproved\n"); /////// print in the screen the message "you're reproved"
}

    return 0; ///////// end of the code
}
