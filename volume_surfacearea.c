/*
name:Hassan Siyat Abdullahi 
reg no:CT101/G/22391/23
*/
#include<stdio.h>
int main(){
const PI=3.14159;
float height;
float radius;
double volume;
double surfacearea;

printf("enter radius\n");
scanf("%f", &radius);
printf("enter height\n");
scanf("%f", &height);

volume=PI*radius*radius*height;
surfacearea=2*PI*radius*radius + 2*PI*radius*height;

printf("volume:%lf\n",volume);
printf("surfacearea:%lf", surfacearea);

  
  return 0;
  }