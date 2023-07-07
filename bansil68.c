/*

Q.5 Write a Program to print the below pattern using nested for loop.
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k,l,s,o;

for(i=1;i<=5;i++){


for(j=1;j<=i;j++){
printf("%d",j);
}

for(k=i;k<=4;k++){
    printf(" ");
}

for(l=4;l>=i;l--){
    printf(" ");
}

for(s=i;s>=1;s--){
    printf("%d",s);
}

printf("\n");
}
getch();
}