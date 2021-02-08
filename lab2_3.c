#include<stdio.h>
#include<string.h>
int main()
{
    int aw,b,c,i;
    char a[3];
    scanf("%d",&aw);
    scanf("%d",&b);
    scanf("%d",&c);
    fflush(stdin);
    for(i=0; i<strlen(a); i++);
    {
        scanf("%s",&a[i]);
    }
    for(i=0; i<strlen(a); i++);
    {
        printf("%d",i);
        printf("%s",a[i]);
        if(a[i]=='A')
            printf("%c ",a[i]);
        else if(a[i]=='B')
            printf("%d ",b);
        else if(a[i]=='C')
            printf("%d ",c);
    }
    return 0;
}
