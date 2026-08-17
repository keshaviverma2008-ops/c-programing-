/*Q4: Write a program to calculate the area and circumference
 of a circle given its radius*/

 #include<stdio.h>
 int main()
 {

    int radius;
    printf("Enter radius:");
    scanf("%d", &radius);
    printf("Area = %f\n", 3.14*radius*radius);
    printf("Circumfernce = %f\n", 2*3.14*radius);
    return 0;
 }

