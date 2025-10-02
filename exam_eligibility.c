//CT101/G/22391/23 HASSAN SIYAT ABDULLAHI 
//Curious to know the ancestors of coding 
#include <stdio.h>
#include<math.h>
int main(){
int attendance;
int  marks;
printf("Enter your attendance in percent\t");
scanf("%d", &attendance);
printf("Enter your marks\t ");
scanf("%d", &marks);
if(attendance >=75/100 && marks>=40){
printf("You are eligible to sit  final exams");
}
else{
printf("You are not eligible to sit  exams");
}
return 0;
}