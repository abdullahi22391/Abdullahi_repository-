// Name: HASSAN SIYATABDULLAHI, Reg No: CT101/G/22392/23
// Program about water bill calculator
// made by just a curious student 
#include<stdio.h>
int main(){
int unit;
double total;
printf("Enter the number of water units consumed\n");
scanf("%d", &unit);
if(unit<=30){
total = unit * 20;
printf("Total billed : %lf\n", total);
total= unit * 20;
}
else if(unit<=60 && unit >=30){
total=unit * 25;
printf("Total billed: %lf\n", total);
}
else{
total= unit * 30;
printf("Total billed: %lf\n", total);
}


return 0;
}