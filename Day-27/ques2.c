/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
   */
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number Of Rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        for(int j=i;j<n;j+=2){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-2;i>=1;i-=2){
        for(int j=i;j<n;j+=2){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
