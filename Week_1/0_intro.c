#include <stdio.h>

void meow(int repeats);
int add(int num1, int num2);

int main(void){

    printf("\n1.Writing Strings : \n");

    // writing strings 
    char ans[299];
    printf("Haggu0p \n");
    printf("Input something a string maybe : ");
    fgets(ans, sizeof(ans), stdin);
    printf("The Input : %s\n",ans);

    printf("\n2.Conditional : \n");

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

    printf("\n3.Increment Decrement : \n");

    // making a counter variable

    int counter = counter + 1;
    // or 
    counter++;
    
    // if you want to -1 counter 
    counter = counter - 1;
    // or 
    counter--;

    printf("\n4.Key Ops using conditionals : \n");

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

    printf("\n5.While Loop : \n");

    // while loop

    int count;
    printf("Enter how many times you wanna display some string : \n");
    scanf("%d",&count);
    while (count > 0) {
        printf("Haggu is King of the world!\n");
        count--;
    }

    printf("\n6.for loop : \n");

    // the above while loop code in for loop 
    for (int i = 0; i < 3; i++){
        printf("Haggu is King of the World!\n");
    }

    printf("\n7.Function calling : \n");
     
    int repeats;
    printf("Enter how many times you wanna repeat cat meows : \n");
    scanf("%d", &repeats);
    meow(repeats);

    // simple calculation made complicated fr

    printf("\n8.Function Nesting it is : \n");

    printf("\nImitation of addition (simple add calc) :");
    int num1;
    int num2;
    printf("\nInput first number : ");
    scanf("%d",&num1);
    printf("\nInput second number : ");
    scanf("%d",&num2);
    printf("\nAddition for ya folks : %d \n", add(num1,num2));

    return 0;
}
int add(int num1, int num2){
    return num1+num2;
}
void meow(int repeats){
    for(int j = 0;j < repeats; j++){
        printf("meow");
    }
    printf("\n");
}