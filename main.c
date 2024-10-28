#include <stdio.h>
#include <math.h>

int main()
{
    int s,n,b,t[100];

    printf("Number of parameters :\n");
    scanf("%d",&n);
    int m = (int)pow(2,n);
    do{
        printf("type ('0' or '1'):\n");
        scanf("%d",&b);
    }while(b != 0 && b != 1);

    int i = 0,max = -1;

    printf("List of numbers ('-1' to stop) :\n");
    while(i < m){
        do{
            printf("num[%d]",i);
            scanf("%d",&s);

        }while(( max >= s || m <= s) && s != -1 );

        if (s == -1){
            break;
        }else{
            t[i] = s;
            max = s;
            i++;
        }
    }


    //display
    for(int j; j< i; j++){
        printf("%d,",t[j]);
    }




    return 0;
}


