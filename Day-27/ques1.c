/*Write a program to print the following pattern:
*
***
*****
*******
*********
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
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-2;i>=1;i-=2){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
