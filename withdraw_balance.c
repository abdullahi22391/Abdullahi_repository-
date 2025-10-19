/*
Name:Hassan siyat abdullahi 
REG:CT101/G/22391/23
*/
#include<stdio.h>
int main (){
int amount;
int balance=1000;
while(balance>0){
printf("enter amount to withdraw\n");
scanf("%d",&amount);
balance-=amount ;
printf("new balance:=%d\n",balance);
}
printf("insufficient ballance");

return 0;
}




    