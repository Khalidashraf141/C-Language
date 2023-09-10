//If-else
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18){
        printf("You can drive");
    }
    else{
        printf("You can't drive");
    }
    return 0;
}

//check if a number is odd or even
#include<stdio.h>
int main(){

    int number;
    printf("Enter the number: ");

    scanf("%d",&number);
    if (number%2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}

//else if (we can use it many times)
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age<13){
        printf("You are child");
    }
    else if (age<=18){
        printf("You are teenage");
    }
    else{
        printf("You are adult");
    }
    return 0;
}

//Ternary Operator (true:fasle)
#include<stdio.h>
int main(){
    int age = 12;
    age>=18 ? printf("You are adult"):printf("You are child");
    return 0;
}

//Switch 
#include<stdio.h>
int main(){
    int day;
    printf("Enter the week first character: ");
    scanf("%c",&day);
    switch (day)
    {
    case 'm':printf("Monday");
        break;

    case 't':printf("Tuesday");
        break;
        
    default:printf("Not found");
        break;
    }
    return 0;
}
