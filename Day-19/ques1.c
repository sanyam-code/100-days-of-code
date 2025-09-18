// Q37: Write a program to find the LCM of two numbers.

// Sample Test Cases:
// Input 1:
// 4 5
// Output 1:
// 20

// Input 2:
// 7 3
// Output 2:
// 21
#include<stdio.h>
int min(int a,int b){
    if (a>b) return b;
    else return a;
}
int main(){
    int a;
    printf("Enter The First Number");
    scanf("%d",&a);
     int b;
    printf("Enter The Second Number");
    scanf("%d",&b);
    int gcd =1;
    for(int i=1;i<=min(a,b);i++){
      if(a%i==0 && b%i==0){
         gcd=i;
      }
      int lcm=1;
      lcm=(a*b)/gcd;
      printf("%d",lcm);
      return 0;
    }
}