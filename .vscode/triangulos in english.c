#include <stdio.h>
#include <stdlib.h>

int main(){ //// inicializating the code
   int L1, L2, L3; //// declaring the variables

   printf("please enter the values of the sides of the triangle:\n"); //// print in the scream and asking for the values of sides of the triangles
   scanf("%i%i%i", &L1, &L2, &L3); //// informing that three values ​​are integers

   if (L1 == L2 && L2 == L3) { //// if the sides is equal, show the message below
       printf("this triangle is equilateral \n"); //// printing in the scream the message
   }

    else if (L1 == L2 || L2 == L3 || L1 == L3) { //// if two sides are equal and one side is different, show the message below
       printf("this triangle is isosceles \n"); //// printing in the scream the message
   }

    else { //// if the conditions informed above are not true, show the message below
       printf("this triangle is scalene\n"); //// printing in the scream the message
   }

   return 0; //// finish the code
}
