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
    printf("0 Avsluta detta sp�nnande program\n");
    printf("Ange ditt val : ");
    val = getchar();        //l�ser in anv�ndarens val
            switch ( val )  //avg�r hur hantera anv�ndarens val
            {

                case 'H':
                case 'h': hej(); break;
                case '0': break;
                default : printf("Dum anv�ndare"); break;
            }

   }
    return 0;
}
