/*
Q.4 Write a Program to print the below pattern using nested for loop.
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1
        */

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k;

for(i=1;i<=5;i++){
for(k=1;k<=i-1;k++){
     printf(" ");

    }
    for(j=5;j>=i;j--){

   printf("%d",j%2);

    }
printf("\n");
}
getch();
}   