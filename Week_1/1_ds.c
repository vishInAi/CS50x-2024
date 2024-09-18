# include <stdio.h>

int main (){

    printf("????\n");

    printf("\n");

    for (int i = 0; i < 4; i++){
        printf("?");
    }

    printf("\n");

    printf("###\n");
    printf("###\n");
    printf("###\n");

    printf("\n");

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("#");
        }
        printf("\n");
    }

    printf("\n");

    int n;
    int t;
    do{
        printf("\nHow many Row you want : ");
        scanf("%d",&n);
        if (n<1){
            printf("\nNah i dont take 0 or -ve.");
        }
    } while ( n<1 );
    do{
        printf("\nHow many Col you want : ");
        scanf("%d",&t);
                if (t<1){
            printf("\nNah i dont take 0 or -ve.");
        }
    } while ( t<1 );
    

    printf("\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < t; j++){
            printf("#");
        }
        printf("\n");
    }






    printf("\n");

    return 0;
}