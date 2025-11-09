#include <stdio.h>
int main(){
int r1,c1, r2,c2;
printf("enter dimensions of your 1st matrix");
   fflush (stdout);
   scanf("%d \t %d",&r1,&c1);
printf("enter dimensions of your 2nd matrix");
fflush (stdout);
scanf("%d \t %d",&r2,&c2);
int arr1[r1][c1], arr2[r2][c2];
int add [r1][c1];
int sub[r1][c1];
int multi[r1][c2];
int i,j,k,choice;
printf("Enter the values of matrix A %d ""x""%d",r1, c1);
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("A[%d][%d]=",i,j);
scanf("%d",&arr1[i][j]);

}
}
printf("Enter the value of matrix B %d ""x""%d",r2, c2);
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("B[%d][%d]=",i,j);
scanf("%d",&arr2[i][j]);

}
}
do {
       printf("\n==== Matrix Operations Menu ====\n");
       printf("1. Addition\n");
       printf("2. Subtraction\n");
       printf("3. Multiplication\n");
       printf("4. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);

       switch(choice) {
           case 1:
           if(r1==r2 && c1==c2)
              { for(i = 0; i < r1; i++) {
                   for(j = 0; j < c1; j++) {
                       add[i][j] = arr1[i][j] + arr2[i][j];
                   }
               }
               printf("\nResult of Matrix Addition:\n");
               for(i = 0; i < r1; i++) {
                for(j = 0; j < c1; j++) {
                       printf("%d\t", add[i][j]);
                   }
                   printf("\n");
               }}
               else { printf ("A and B are not of same dimentions");}
               
               break;

           case 2:
if(r1==r2 && c1==c2){
               for(i = 0; i < r1; i++) {
                   for(j = 0; j < c1; j++) {
                       sub[i][j] = arr1[i][j] - arr2[i][j];
                   }
               }
               printf("\nResult of Matrix Subtraction:\n");
               for(i = 0; i < r1; i++) {
                   for(j = 0; j < c1; j++) {
                       printf("%d\t", sub[i][j]);
                   }
                   printf("\n");
               }}
             else { printf ("A and B are not of same dimentions");}  
               break;

           case 3:

               for(i = 0; i < r1; i++) {
                   for(j = 0; j < c2; j++) {
                       multi[i][j] = 0;
                       for(k = 0; k < c1; k++) {
                           multi[i][j] += arr1[i][k] * arr2[k][j];
                       }
                   }
               }
               printf("\nResult of Matrix Multiplication:\n");
               for(i = 0; i < r1; i++) {
                   for(j = 0; j < c2; j++) {
                       printf("%d\t", multi[i][j]);
                   }
                   printf("\n");
               }
               break;

           case 4:
               printf("\nExiting program. Goodbye!\n");
               break;

           default:
               printf("\nInvalid choice! Please try again.\n");
       }

   } while(choice != 4);

   return 0;
}


