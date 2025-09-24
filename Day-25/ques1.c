/*Write a program to print the following pattern:
5
45
345
2345
12345*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number Of Rows");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
