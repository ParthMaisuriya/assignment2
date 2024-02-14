//WAP of Addition, Subtraction, Multiplication and Division using Switchcase.(Must Be Menu Driven)
#include<stdio.h>  
  
int main()  
{  
    int a, b;  
    char choice;  
  
    printf("Enter your choice\n");  
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");  
    scanf("%c", &choice);  
  
    printf("Enter 2 integer numbers. Format: a + b\n");  
    scanf("%d %c %d", &a, &choice, &b);  
  
  
  
    switch(choice)  
    {  
        case '+': printf("%d + %d = %d\n", a, b, (a+b));  
                break;  
  
        case '-': printf("%d - %d = %d\n", a, b, (a-b));  
                break;  
  
        case '*': printf("%d x %d = %d\n", a, b, (a*b));  
                break;  
  
        case '/': if( b != 0)  
                    printf("%d / %d = %d\n", a, b, (a/b));  
                else  
                    printf("Number can't be divided by 0\n");  
                break;  
  
        default: printf("You entered wrong choice\n");  
                 break;  
    }  
  
    return 0;  
}  
