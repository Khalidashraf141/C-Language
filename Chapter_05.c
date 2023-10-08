//Functions - block of code that performs particular task
//Take argument - do work - return result 
//it can be used multiple times
//increase code reusability

//Properties
//  Execution always starts from main
// A function gets called directly or inderectly from main
// There can be multiple functions in a program


#include<stdio.h>
//declaration/prototype
void printhello();
int main(){
    printhello(); //function call
    printhello(); //function call
    printhello(); //function call
    return 0;
}
//function definition
void printhello(){
    printf("Hello World!\n");
    printf("Hello My name is Khalid\n");
}

//Write 2 functions one to print "Hello" and second to print "good bye"
#include<stdio.h>
void hello();
void goodbye();

int main(){
    hello();
    goodbye();
    return 0;
}

void hello(){
    printf("Hello\n");
}
void goodbye(){
    printf("Good bye:)\n");
}

//Write a function that prints Namaste if user is indian and Bonjour if the user is French.
#include<stdio.h>
void namaste();
void bonjour();

int main(){
    char input;
    printf("Enter i for Indian or f for French:  ");
    scanf("%c",&input);
    if (input == 'i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("Namaste:)!");
}
void bonjour(){
    printf("Bonjour:)!");
}

/*Function Types

Library function - Special functions inbuilt in C | scanf() , print()
user-defined - declared & defined by programmer

*/

#include<stdio.h>
int sum(int a , int b);
int main(){
    int a , b;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);

    int ouput = sum(a,b);
    printf(ouput);
    return 0;
}
int sum(int a , int b){
    return a + b;
}

//Table function
#include<stdio.h>
void printTable(int n);
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    mul = printTable();
    printf(mul);
    return 0;





}
void printTable(int n){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d",n*i)
    }
    

}

//Gst 
#include<stdio.h>
void calculatePrice(float value);
int main(){
    float value = 100.0;
    calculatePrice(value);
    printf("value is %f\n",value)
    return 0;

}
void calculatePrice(float value){
    value = value + (0.18*value);
    printf("final value is %f: ", value);
}
//Use library functions to calculate the square of a number given by user
#include<stdio.h>
#include<math.h>
int main(){
     int n = 4;
    printf("%f",pow(n,2));
    return 0;
}

//Write functions to calculate are of a square, a circle and a rectangle
#include<stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
    float a = 5.0;
    float b = 10.0;
    printf("area is %f", rectangleArea(a,b));
    return 0;

}
float squareArea(float side){
    return side * side;
}
float circleArea(float rad){
    return 3.14 * rad * rad;
}
float rectangleArea(float a , float b){
    return a * b;
}

//recursive function
#include<stdio.h>
void printHW(int count);
int main(){
    printHW(5);
    return 0;
}
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello world\n");
    printHW(count-1);

}

//Sum of first n natural numbers.
#include<stdio.h>
int sum(int n);
int main(){
    printf("sum is %d",sum(5));
    return 0;
}

//recurisive function
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNum1 = sum(n-1); //sum of 1 to n
    int sumN = sumNum1 + n;
    return sumN;
}

//factorial of n number
#include<stdio.h>
int fact(int n);
int main(){
    printf("Factorial of n %d",fact(5));
    return 0;
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    int factNum1 = fact(n-1);
    int factN = factNum1 * n;
    return factN;
}

//Write a function to convert celsius to fahrenheit
