   #include <stdio.h>
   
   int main() {
      
   int age;
   char userName[20];
   printf("\nenter your name: ");
   fgets(userName, 20, stdin);
   printf("\nthank you, %s", userName);


   printf("please enter your age: ");
   scanf("%d", &age);
   printf("you are %d years old", age);



   return 0;
   }

   