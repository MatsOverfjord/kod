#include <stdio.h>
#include <stdlib.h>

int hej(void){
printf("Hello world!\n");
    return 0;
}


int main()
{
char val = ' ';
   while (val != '0')
   {

    printf("  Meny  \n\n");                         //Skriver ut menyn
    printf("H .. Skriv ut 'Hello World' \n");
    printf("Ange ditt val : \n");
    printf("Ange ditt val : \n");
    printf("Ange ditt val : \n");
    printf("0 Avsluta detta spännande program\n");
    printf("Ange ditt val : ");
    val = getchar();        //läser in användarens val
            switch ( val )  //avgör hur hantera användarens val
            {

                case 'H':
                case 'h': hej(); break;
                case '0': break;
                default : printf("Dum användare"); break;
            }

   }
    return 0;
}
