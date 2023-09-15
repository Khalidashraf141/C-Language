#include<stdio.h>
int main(){
    for (int i = 0; i <= 100; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}

#include<stdio.h>
int main(){                   
    //Increment operator
   // --i (pre decrement)
   // i++ (post decrement)
    //i++ (post increment)
    int i = 12;
    printf("%d",i++); //use then increase
    printf("%d",i);

    //++i (pre increment)
    int j = 13;
    printf("%d",++j); //directly increase 

    return 0;
}

//char and float
#include<stdio.h>
int main(){
    for (char i = 'a'; i <='z'; i++)
    {
        printf("%c\n",i);
    }

    for (float i = 1.0; i <= 5.0; i++)
    {
        printf("%f\n",i);
    }
    return 0;
    
}
//Infinite loop
#include<stdio.h>
int main(){
    for (int i = 1; ; i++)
    {
        printf("Hello world!\n");
    }
    return 0;
    
}

//while loop
#include<stdio.h>
int main(){
    int i = 1;
    while (i<=10)
    {
        printf("Hello world\n");
        i++;
    }
    return 0;
    
}
//Print the numbers from 0 to n, if n is given by user
//for loop
#include<stdio.h>
int main(){
    int i;
    printf("Enter your number: ");
    scanf("%d",&i);
    for ( int num = 0; num <= i; num++)
    {
        printf("%d",num);
    }
    return 0;
    
}
//Print the numbers from 0 to n, if n is given by user (use while loop
//while loop
#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    int i = 0;
    while (i<=num)
    {
        printf("%d",i);
    }
    return 0;
    
}

//do while loop
#include<stdio.h>
int main(){
    int i = 0;
    do
    {
        printf("Helloworld");
        i++;
    } while (i<=12);
    return 0;
    
}

//Print the sum of first n Natural number
#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Enter your number: ");
    scanf("%d",&num);
    for ( int i = 1; i <= num; i++)
    {
        sum = sum + i;
        
    }
    printf("sum is %d",sum);
    return 0;
}

//reverse 
#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i = num; i >= 1; --i)
    {
        printf("%d\n",i);
    }
    return 0;
    
}
//Print the table of a number input by the user n = 2
#include<stdio.h>
int main(){
    int num;
    printf("Enter your number:");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",i*num);
    }
    return 0;
}
//Break statement (exit the loop)
#include<stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("%d\n",i);
        
    }
    printf("end");
    return 0;
}

//Keep taking numbers as input from user until user enters an odd number
#include<stdio.h>
int main(){
    int num;
    do
    {
        printf("Enter your number: ");
        scanf("%d",&num);
        if (num % 2 != 0)
        {
            break;
        }
        
        
    } while (1);
    printf("Thank you");
    return 0;
    
}
//Keep taking numbers as input form user until user enters a number which is multiple of 7
#include<stdio.h>
int main(){
    int num;
    for (int i = 1; ;)
    {
        printf("Enter your number: ");
        scanf("%d",&num);
        if (num % 7 == 0)
        {
            break;
        }
        
    }
    printf("end");
    return 0;
}
//continue statment (skip to next iteration)
#include<stdio.h>
int main(){
    for (int i = 0; i < 11; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d\n",i);

        
    }
    printf("end");
    return 0;
}
//Print all odd numbers from 5 to 50
#include<stdio.h>
int main(){
    for (int i = 5; i < 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n",i);
        
    }
    return 0;
}

//print the factorial of a number n
#include<stdio.h>
int main(){
    int num = 5;
    int fact = 1;
    for (int i = 1 ; i <= num; i++)
    {
        fact = fact*i;
    }
    printf("%d",fact);
    return 0;
}
//Print reverse of the table for a number n
#include<stdio.h>
int main(){
    int num;
    printf("Enter your number");
    scanf("%d",&num);
    for (int i = 10; i <= 1; --i)
    {
        printf("%d\n",num*i);
    }
    return 0;   
}

//Calculate the sum of all numbers between 5 and 50 (including 5 & )
#include<stdio.h>
int main(){
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}
