#include<stdio.h>

int main()
{
    int N[50];
    int i;

    for(i=0; i<50; i++)
    {
        scanf("%d",&N[i]);
    }

    for(i=0; i<strlen(N); i++)
    {
        if(N[i]=='0')
        printf("Zero");
        else if(N[i]=='1')
        printf("One");
        else if(N[i]=='2')
        printf("Two");
        else if(N[i]=='3')
        printf("Three");
        else if(N[i]=='4')
        printf("Four");
        else if(N[i]=='5')
        printf("Five");
        else if(N[i]=='6')
        printf("Six");
        else if(N[i]=='7')
        printf("Seven");
        else if(N[i]=='8')
        printf("Eight");
        else if(N[i]=='9')
        printf("Nine");

        if(i<strlen(N)-1)
            printf("-");
    }

}
