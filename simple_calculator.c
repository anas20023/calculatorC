#include<stdio.h>

///Declaring The Function


float sum(float a,float b);
float sub(float a,float b);
float mult(float a,float b);
float div(float a,float b);



/// Main Function
int main()
{
    float a,b;
    char opr;
    printf("\t\t\t\t\t\t SIMPLE CALCULATOR\n");
    printf("\t\t\t\t\t-----------------------------------\n\n\n");
    printf("Enter Numbers And Operators in Following Format\n");
    printf("Number [+,-,*,/] Number\n");
    scanf("%f%c%f",&a,&opr,&b);

    switch(opr)
    {
    case '+':
        printf("\n=%0.2f\n\n",sum(a,b)); /// Call For Additon
        break;
    case '-':
        printf("\n=%0.2f\n\n",sub(a,b)); /// Call For Substraction
        break;
    case '*':
        printf("\n=%0.2f\n\n",mult(a,b)); /// Call For Multiplication
        break;
    case '/':
        printf("\n=%0.2f\n\n",div(a,b)); /// Call For Division
        break;
    default:
        printf("\n\nMATH ERROR\n\n\n\n");
    }

    return 0;
}

/// Defining the Function and passing perameter

float sum(float a,float b)
{
    return a + b;
}
float sub(float a,float b)
{
    return a - b;
}
float mult(float a,float b)
{
    return a * b;
}
float div(float a,float b)
{
    return a / b;
}
