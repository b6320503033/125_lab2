#include<stdio.h>
int main()
{
    float t,fp;
    int s,n,fs;
    char p;
    scanf("%c",&p);
    scanf("%f",&t);
    if(p=='A')
    {
        if(t>200)
        {
            t=t-200.00;
            s=((int)t*60);
            n=t*100;
            n%=100;
            fs=s+n;
            fp=199+(fs*(3.0/60.0));
        }
        else
            fp=199;
    }
    else if(p=='B')
    {
        if(t>400)
        {
            t=t-400;
            s=((int)t*60);
            n=t*100;
            n%=100;
            fs=s+n;
            fp=299+(fs*(2.0/60.0));
        }
        else
            fp=299;
    }

    printf("%.2f",fp);

    return 0;


}
