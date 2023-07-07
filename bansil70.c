/*
Q.7 Write a Program to print the below pattern using nested for loop.
*  *  *  *  *
*           *
*  *  *  *  *
*           *
*           *
 
  *   *   * 
*           *
*           *
*           *
  *   *   *    
               *
                  *   *     

    *           *
     *         *
      *   *   *
       * * * *
        *   *


*  *  *  
*       *
*  *  *     
*  *  
*    *
*       *
*/

#include<stdio.h>
#include<conio.h>

void main () {
int i;


// for A 

for(i=1;i<=5;i++){

if(i==1 || i==3){
    printf("* * * * *\n");
}else {

    printf("*       *\n");
}
}

printf("\n\n");


// for Q
for(i=1;i<=6;i++){

if(i==1 || i==5){
    printf("  *   *   * ");
}else if(i==2 || i==3 || i==4){
    printf("*           *");

}else{
    printf("               *\n                  *   *");

}
printf("\n");
}
printf("\n\n");

// for W

for(i=1;i<=5;i++){

if(i==1){
    printf(" *           *");
}else if (i==2){
    printf("  *         *");

}else if(i==3){
    printf("   *   *   * ");
}else if (i==4){
    printf("    * * * *");
}else{
    printf("     *   *  ");
}
printf("\n");
}
printf("\n\n");

// FOR R

for(i=1;i<=6;i++){

if(i==1 || i==3){
    printf("*  *  *\n");
}else if(i==2){
    printf("*       *\n");

}else if(i==4){
    printf("*  *\n");
}else if(i==5){
    printf("*     *\n");
}else {
    printf("*       *\n");
}
}
getch();
}