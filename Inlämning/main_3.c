#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <float.h>
#include <limits.h>
#include <math.h>

int tfarg =0;

int hej(void){ // punkt 1
    system("CLS");
    printf(" Hello world!\n");
    printf("\n Press Any Key to return to menu");
    getch();
    return 0;
}
int farg(){
    if (tfarg == 0){
        tfarg = tfarg+1;
        system("color 0C");
    }
    else{
        tfarg = tfarg-1;
        system("color 07");
        }
return 0;
}

int datum()
{
char dateStr[9];
char timeStr[9];

system("CLS");
_strdate( dateStr);
printf(" Date : %s\n", dateStr);

_strtime( timeStr );
printf(" Time : %s\n", timeStr);
printf("\n Press Any Key to return to menu");
getch();

return 0;
}

int biggest(void){
  int a,b;
  system("CLS");
  printf(" Give me a number: ");
  scanf("%d",&a);
  printf(" And another one : ");
  scanf("%d",&b);
  if (a>b){
  printf("\n The largest number is %d",a);
  }
  if (b>a){
  printf("\n The largest number is %d",b);
  }
  if (a==b){
    printf("\n The numbers %d and %d are equal",a,b);
  }
  printf("\n\n Press Any Key to return to menu");
  getch();
  return 0;
}

int user(void){
    char fnamn[25], enamn[25], alder[3];
   // int alder;

system("CLS");
printf(" First name? : ");
scanf("%24s", fnamn);
 //getstring(fnamn);
printf(" Family name?: ");
scanf("%24s", enamn);
 //getstring(enamn);
printf(" Age?        : ");
 scanf("%2s", alder);
 // get user input from the keyboard
 printf("\n %s %s %s years \n", fnamn,enamn,alder);
 printf("\n Press Any Key to return to menu");
 getch();
    return 0;
}

int random(void){
    int i = 0, number = 0, guess = 0;
    srand(time(NULL));
    number = rand() % 100 + 1;
    system("CLS");
    printf(" Guess on a number between 1 and 100\n");
    do {
        i++;
        printf(" Guess number %d ?: ", i);
        scanf("%d", &guess);

        if (number > guess){
            printf(" Too small \n");
        }
        if (number < guess){
            printf(" Too big \n");
        }
    }
    while (number != guess);
    printf("\n Congratulation correct guess %d in %d tries \n", number,i);
    printf("\n Press Any Key to return to menu");
    getch();
    return 0;
}

int writetofile(){

FILE *fp;
char text[80];

system("CLS");
printf(" Write some text in English ? : ");
scanf("%s", text);
fp = fopen("./test.txt", "w+");
//fprintf(fp, text );
fputs(text, fp);
fclose(fp);
printf("\n Press Any Key to return to menu");
getch();
return 0;
}

int readfromfile(){

    FILE *fp;
    char buff[255];

    system("CLS");
    fp = fopen("./test.txt", "r");
    fgets(buff, 255, (FILE*)fp);
    printf(" File content: \n\n");
    printf(" %s\n", buff );
    fclose(fp);
    printf("\n Press Any Key to return to menu");
    getch();
    return 0;
}

int squareroot(void){
    float number = 0.0, sqrnumber = 0.0;
    double pow2number = 0.0, pow10number = 0.0;
    system("CLS");
    printf(" Give a decimal number(0.0) : ");
    scanf("%f", &number);
    sqrnumber = sqrt(number);
    pow2number = pow(number, 2);
    pow10number = pow(number, 10);
    printf("\n Square root of %f is %.5f \n", number, sqrnumber);
    printf(" %f to the power of 2 is %.5f \n", number, pow2number);
    printf(" %f to the power of 10 is %.5f \n", number, pow10number);
    printf("\n Press Any Key to return to menu");
    getch();
    return 0;
}

int multiplication(void){
  int table = 1;
  system("CLS");
  for (int table = 1; table <11; table++){
        printf("\n  %d ans tabell\n", table);
    for (int i = 1; i < 11; i++){
        printf("%4d x%3d = %4d \n", i, table, i*table);
    }
  }
    printf("\n Press Any Key to return to menu");
    getch();
    return 0;
}

int arrayday(void){
   int i = 0, temp = 0;
   int array1[10], array2[10];
    system("CLS");
    srand(time(NULL));
    printf(" Array 1 ");
    for (int i=0; i<10; i++){
        array1[i] = rand() % 100 + 1;
        array2[i] = array1[i];
        printf(" %3d", array1[i]);
    }

    //Sort the array in ascending order
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
           if(array2[i] > array2[j]) {
               temp = array2[i];
               array2[i] = array2[j];
               array2[j] = temp;
           }
        }
    }
        printf("\n\n Array 2 ");
    for (int i=0; i<10; i++){
        printf(" %3d", array2[i]);
    }
    printf("\n Press Any Key to return to menu");
    getch();
    return 0;
}

int palindrom(char str[]){
   // Start from leftmost and rightmost corners of str

    int l = 0;
    int h = strlen(str) - 1;
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            printf("\n Press Any Key to return to menu");
            getch();
            return 1;
        }
    }
    printf("%s is a palindrome\n", str);
    printf("\n Press Any Key to return to menu");
    getch();
    return 0;
}

int between(){
 int a,b;
  system("CLS");
  printf(" Give me a number: ");
  scanf("%d",&a);
  printf(" And another one : ");
  scanf("%d",&b);
  if (a>b+1){
        for (int i=b+1; i<a;i++){
            printf("\n %d",i);
        }
    }
  if (b>a+1){
   for (int i=a+1; i<b;i++){
            printf("\n %d",i);
        }
  }
    printf("\n Press Any Key to return to menu");
    getch();
    return 0;
}


int main()
{

    char str[80];
    char val = ' ';
   while (val != '0')
   {

    system("CLS");
    printf("  Menu  \n\n");                         //Skriver ut menyn
    printf(" H .. Print 'Hello World' \n");
    printf(" U .. User information \n");
    printf(" C .. Toggle text color \n");
    printf(" D .. Print todays date  \n");
    printf(" L .. Largest number \n");
    printf(" G .. random Game \n");
    printf(" W .. Write text to file \n");
    printf(" R .. Read text from file \n");
    printf(" Q .. sQuare root & power of 2 and 10\n");
    printf(" M .. Multiplication\n");
    printf(" A .. Array day\n");
    printf(" P .. Palindrom\n");
    printf(" B .. Between\n");
    printf(" 0 .. End this exiting program \n\n");
    printf(" Make your selection : ");
    val = getchar();        //läser in användarens val
            switch ( val )  //avgör hur hantera användarens val
            {
                case 'H':
                case 'h': hej();  break;
                case 'U':
                case 'u': user();  break;
                case 'C':
                case 'c': farg();  break;
                case 'D':
                case 'd': datum(); break;
                case 'L':
                case 'l': biggest(); break;
                case 'G':
                case 'g': random();  break;
                case 'W':
                case 'w': writetofile();  break;
                case 'R':
                case 'r': readfromfile();  break;
                case 'Q':
                case 'q': squareroot();  break;
                case 'M':
                case 'm': multiplication();  break;
                case 'A':
                case 'a': arrayday();  break;
                case 'P':
                case 'p': system("CLS");
                          printf("A word please? : ");
                          scanf("%80s", str);
                          palindrom(str);  break;
                case 'B':
                case 'b': between();  break;

                case '0': break;
                default : printf("Stupid user"); break;
            }

   }
     return 0;
}
