//Type Declaration Instructions
#include<stdio.h>
int main(){
    int age = 22;
    int oldage = age;
    int newage = oldage+2;
    printf("The new age is = %d\n",newage);

    int rupee = 1, dollar;
    dollar = 72;
    printf("One rupee in dollar is %d",dollar);
    return 0;
}

#include<stdio.h>
int main(){
    //valid declatation
    int age1, age2, age3;
    age1 = age2 = age3 = 22;

    //invalid
    //int a1 = a2 = a3 = 22

    //valid
    int a = 1, b = 2, c = 3;
    a = b+c;
    printf("%d",a);

    //invalid
    //int a = 1, b = 2, c = 3;
    //b+c = a;

    printf("%d",4%2); // (%) it give you reminder
    printf("%d",5%4);

    return 0;
}

//Type Conversion
#include<stdio.h>
int main(){
    printf("sum of 2 & 3 %d",2 + 3);
    printf("sum of 2.0 & 3 %f",2.0 + 3);
    printf("sum of 2.0 & 3.0 %f",2.0 + 3.0);
    return 0;
}

//Associativity
#include<stdio.h>
int main(){
    printf("%d", 5+2/2*3);
    return 0;
}

//Relational Operator 
#include<stdio.h>
int main(){
    printf("%d\n", 4==4);


    printf("%d\n", 4<3);
    printf("%d\n", 3<4);
    printf("%d\n", 4<4);
    printf("%d\n", 4<=4);

    printf("%d\n", 4>2);
    printf("%d\n", 4<4);
    printf("%d\n", 4>=4);

    printf("%d\n", 4!=4);
    printf("%d\n", 3!=4);
    return 0;
}

//logical Operator
#include<stdio.h>
int main(){
    printf("%d\n",3<4 && 2<4);
    printf("%d\n",3>4 && 5<4);

    printf("%d\n",3>2 || 2<1);
    printf("%d\n",3>2 || 2<1);

    printf("%d\n", !(2>1 && 3>2)); // (!) not
    printf("%d\n", !(4<3 || 5<3));
    return 0;
}

//Assignment Operator
#include<stdio.h>
int main(){
    int age = 22;
    age += 1;
    printf("%d",age);

    age -= 12;
    printf("%d",age);

    age /= 2;
    printf("%d",age);

    age %= 12;
    printf("%d",age);
    return 0;
}

/*Operator Precendence
Priority            Operator
1                     !
2                   *,/,%
3                    +,-
4                   <,<=,>,>=
5                    ==, !=
6                     &&
7                     ||
8                     =
*/
