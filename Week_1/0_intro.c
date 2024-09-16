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
    counter++;
    
    // if you want to -1 counter 
    counter = counter - 1;
    // or 
    counter--;

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

    // Simple Yes and No

    #include <stdio.h>

    char key;
    printf("\nEnter 'y' for execution or 'n' for cancelling execution: ");
    scanf(" %c", &key);  // Note the space before %c to consume any leading whitespace
    if (key == 'y' || key == 'Y') { 
        printf("Code executed\n");
        // code to execute sits here
    } else if (key == 'n' || key == 'N') {
        printf("Code not executed\n");
        // code sits here
    } else {
        printf("Invalid input\n");
    }

    // while loop

    int count;
    printf("Enter how many times you wanna display some string : \n");
    scanf("%d",&count);
    while (count < 0) {
        printf("Haggu is King of the world!\n");
        count = count--;
    }

    return 0;
}