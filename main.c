#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {


    char r;
    int i, n;
   time_t t;
   int liczba2;

   printf("Select a number draw range: 1:10, 2:20, 3:30, 4:40, 5:50");
   puts("");
   scanf("%c",&r);
switch(r)
{

    case '1':

    n = 9999;

   srand((unsigned) time(&t));

   int liczba3 = rand() % 10;
    int liczba4;




   printf("Number draw range 0-10 \n");

   if(liczba3 % 2 == 0)
   {
       printf("The number is divided by two \n");
   }

   if(liczba3 % 3 == 0)
   {
       printf("The number is divided by three \n");
   }

   if(liczba3 % 4 == 0)
   {
       printf("The number is divided by four \n");
   }

   if(liczba3 % 5 == 0)
   {
       printf("The number is divided by five \n");
   }

   if(liczba3 % 6 == 0)
   {
       printf("The number is divided by six \n");
   }

   if(liczba3 % 7 == 0)
   {
       printf("The number is divided by seven \n");
   }

   if(liczba3 % 8 == 0)
   {
       printf("The number is divided by eight \n");
   }

   if(liczba3 % 9 == 0)
   {
       printf("The number is divided by nine \n");
   }

   if(liczba3 % 10 == 0)
   {
       printf("The number is divided by ten \n");
   }

   for(i = 0; i < n; i++)
 {

   scanf("%d",&liczba4);

   if(liczba3 == liczba4)
   {
       printf("You guessed the number, your number is: %d \n",liczba4);
        break;
   }

   else
   {
       printf("It's not that number yet \n");
   }

 }
    break;

    case '2':

    n = 9999;

   srand((unsigned) time(&t));

   int liczba5 = rand() % 20;
    int liczba6;



   printf("Number draw range 0-20 \n");

   if(liczba5 % 2 == 0)
   {
       printf("The number is divided by two \n");
   }

   if(liczba5 % 3 == 0)
   {
       printf("The number is divided by three \n");
   }

   if(liczba5 % 4 == 0)
   {
       printf("The number is divided by four \n");
   }

   if(liczba5 % 5 == 0)
   {
       printf("The number is divided by five \n");
   }

   if(liczba5 % 6 == 0)
   {
       printf("The number is divided by six \n");
   }

   if(liczba5 % 7 == 0)
   {
       printf("The number is divided by seven \n");
   }

   if(liczba5 % 8 == 0)
   {
       printf("The number is divided by eight \n");
   }

   if(liczba5 % 9 == 0)
   {
       printf("The number is divided by nine \n");
   }

   if(liczba5 % 10 == 0)
   {
       printf("The number is divided by ten \n");
   }

   for(i = 0; i < n; i++)
 {

   scanf("%d",&liczba6);

   if(liczba5 == liczba6)
   {
       printf("You guessed the number, your number is: %d \n",liczba6);
        break;
   }

   else
   {
       printf("It's not that number yet \n");
   }

 }
    break;

    case '3':

    n = 9999;

   srand((unsigned) time(&t));

   int liczba7 = rand() % 30;
    int liczba8;



   printf("Number draw range 0-30 \n");

   if(liczba7 % 2 == 0)
   {
       printf("The number is divided by two \n");
   }

   if(liczba7 % 3 == 0)
   {
       printf("The number is divided by three \n");
   }

   if(liczba7 % 4 == 0)
   {
       printf("The number is divided by four \n");
   }

   if(liczba7 % 5 == 0)
   {
       printf("The number is divided by five \n");
   }

   if(liczba7 % 6 == 0)
   {
       printf("The number is divided by six \n");
   }

   if(liczba7 % 7 == 0)
   {
       printf("The number is divided by seven \n");
   }

   if(liczba7 % 8 == 0)
   {
       printf("The number is divided by eight \n");
   }

   if(liczba7 % 9 == 0)
   {
       printf("The number is divided by nine \n");
   }

   if(liczba7 % 10 == 0)
   {
       printf("The number is divided by ten \n");
   }

   for(i = 0; i < n; i++)
 {

   scanf("%d",&liczba8);

   if(liczba7 == liczba8)
   {
       printf("You guessed the number, your number is: %d \n",liczba8);
        break;
   }

   else
   {
       printf("It's not that number yet \n");
   }

 }
    break;

        case '4':

    n = 9999;

   srand((unsigned) time(&t));

   int liczba9 = rand() % 40;
    int liczba10;



   printf("Number draw range 0-40 \n");

   if(liczba9 % 2 == 0)
   {
       printf("The number is divided by two \n");
   }

   if(liczba9 % 3 == 0)
   {
       printf("The number is divided by three \n");
   }

   if(liczba9 % 4 == 0)
   {
       printf("The number is divided by four \n");
   }

   if(liczba9 % 5 == 0)
   {
       printf("The number is divided by five \n");
   }

   if(liczba9 % 6 == 0)
   {
       printf("The number is divided by six \n");
   }

   if(liczba9 % 7 == 0)
   {
       printf("The number is divided by seven \n");
   }

   if(liczba9 % 8 == 0)
   {
       printf("The number is divided by eight \n");
   }

   if(liczba9 % 9 == 0)
   {
       printf("The number is divided by nine \n");
   }

   if(liczba9 % 10 == 0)
   {
       printf("The number is divided by ten \n");
   }

   for(i = 0; i < n; i++)
 {

   scanf("%d",&liczba10);

   if(liczba9 == liczba10)
   {
       printf("You guessed the number, your number is: %d \n",liczba10);
        break;
   }

   else
   {
       printf("It's not that number yet \n");
   }

 }
    break;



    case '5':




   n = 9999;

   srand((unsigned) time(&t));

   int liczba1 = rand() % 50;




   printf("Number draw range 0-50 \n");

   if(liczba1 % 2 == 0)
   {
       printf("The number is divided by two \n");
   }

   if(liczba1 % 3 == 0)
   {
       printf("The number is divided by three \n");
   }

   if(liczba1 % 4 == 0)
   {
       printf("The number is divided by four \n");
   }

   if(liczba1 % 5 == 0)
   {
       printf("The number is divided by five \n");
   }

   if(liczba1 % 6 == 0)
   {
       printf("The number is divided by six \n");
   }

   if(liczba1 % 7 == 0)
   {
       printf("The number is divided by seven \n");
   }

   if(liczba1 % 8 == 0)
   {
       printf("The number is divided by eight \n");
   }

   if(liczba1 % 9 == 0)
   {
       printf("The number is divided by nine \n");
   }

   if(liczba1 % 10 == 0)
   {
       printf("The number is divided by ten \n");
   }

   for(i = 0; i < n; i++)
 {

   scanf("%d",&liczba2);

   if(liczba2 == liczba1)
   {
       printf("You guessed the number, your number is: %d \n",liczba1);
        break;
   }

   else
   {
       printf("It's not that number yet \n");
   }

 }
    break;

}






   return(0);
}
