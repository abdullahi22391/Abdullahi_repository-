/*
NAME:HASSAN SIYAT ABDULLAHI 
REG:CT101/G/22391/23
*/
#include <stdio.h>
int main() {

char password[20];

do {
printf("Enter password: ");
scanf("%s", password);
} while (strcmp(password, "1234") != 0);

printf("Access Granted\n");
 return 0;
}


    