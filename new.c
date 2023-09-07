#include <stdio.h>
int main() {

   char userName[20];
   printf("enter your name: ");
   fgets(userName, 20, stdin);
   printf("thank you, %s", userName);
   

   return 0;
}
