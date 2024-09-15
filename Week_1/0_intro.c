#include <stdio.h>

int main(void){
    char ans[299];
    printf("Haggu0p \n");
    printf("Input something a string maybe : ");
    fgets(ans, sizeof(ans), stdin);
    printf("The Input : %s\n",ans);

    // some Conditional
    int x,y;
    printf("Enter x :");
    scanf("%d",&x);
    printf("Enter y :");
    scanf("%d",&y);
    if (x<y){
        printf("y is greater");
    }
    else if (x>y){
        printf("x is greater");
    }
    else if (x==y){
        printf("Both x and y are equal you see!");
    }

    // making a counter variable

    int counter = counter + 1;
    // or 
    counter = counter++;
    
    // if you want to -1 counter 
    counter = counter - 1;
    // or 
    counter = counter--;

    // compare
    
    int a,b;
    printf("enter some value of num1 : ");
    scanf("%d",&a);
    printf("enter some value of num2 : ");
    scanf("%d",&b);
    if (a<b){
        printf("num1 is less than num2");
    }
    else{
        printf("num1 is not less than num2");
    }

    return 0;
}