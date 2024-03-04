#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int number;


    printf("digite um numero para escolher um curso\n");

   printf("(1) agronomia\n");
   printf("(2) veterinaria\n");
   printf("(3) zootecnia\n");
   printf("(4) pedagogia\n");
   printf("(5) letras\n");
   printf("(6) enegenharia de alimentos\n");
   printf("(7) enegenharia da computação\n");

 scanf("%d",&number);

    switch(number) {

    case 1: 
    printf("voce pertence ao curso de agronomia");
    break;

    case 2:
    printf("voce pertence ao curso de veterinária");
    break;

    case 3:
    printf("voce pertence ao curso de zootecnia");
    break;

    case 4:
    printf("voce pertence ao curso de pedagogia");
    break;

    case 5:
      printf("voce pertence ao curso letras");
    break;

    case 6:
  printf("voce pertence ao curso de engenharia de alimentos");
    break;

   case 7:
  printf("voce pertence ao curso de ciencia da computacao");
    break;
 
    default:
    printf("voce nao pertence a nenhum curso da uab");
    }
    return 0;
}