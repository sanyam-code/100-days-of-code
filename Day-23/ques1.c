//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number Of Terms");
    scanf("%d",&n);
    float sum=0.0;
    for(int i=1;i<=n;i++){
        sum+= (float)(2*i)/(4*i-1);
    }
    printf("The Sum Of The Series Is %f",sum);
    return 0;
}
