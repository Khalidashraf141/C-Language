//First program
#include<stdio.h>
int main(){
    printf("Hello world");
    return 0;
}

//Variables & Data Types + Constansts & Keywords
#include<stdio.h>
int main(){
    int number;
    float pi;
    char name;
    return 0;
}

//Output
#include<stdio.h>
int main(){
    int a,b;

    printf("Enter first num: ");
    scanf("%d",&a);

    printf("Enter second num: ");
    scanf("%d",&b);

    printf("the sum of a+b %d",a+b);
    return 0;
}

//Area of Square
#include<stdio.h>
int main(){
    int side;
    printf("Enter the num: ");
    scanf("%d",&side);
    printf("The area of square:%d",side*side);
    return 0;
}

//Area of Circle
#include<stdio.h>
int main(){
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    printf("The area of circle%f",3.14*radius*radius);
    return 0;

}

/*
Variable is the name of a memory location which stores some data






Variables Rules=
a) Variables are case sensitive
b)1st character is alphabet or "_"
c)no comma/blank space
d)No other symbol other "_"


Compilation - A computer program that translates C code into machine code.
*/
