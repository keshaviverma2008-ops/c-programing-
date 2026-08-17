/*Q2: Write a program to input two numbers and display their sum
 difference, product, and quotient*/

#include<stdio.h>
int main(){
    int n1,n2;
    int s,d,m,q;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    s=n1+n2;
    d=n1-n2;
    m=n1*n2;
    q=n1/n2;
    printf("sum of the given numbers is:%d\n",s);
    printf("difference of the given numbers is:%d\n",d);
    printf("product of the given numbers is:%d\n",m);
    printf("quotient of the given numbers is:%d\n",q);
    return 0;

    
}




