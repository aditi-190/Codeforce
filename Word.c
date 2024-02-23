
#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[100];
    int up=0,lo=0,i;
    scanf("%s",&s);
    for(int i=0; s[i]!='\0';i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }

        else
        {
            lo++;
        }
    }
    for(int i=0; s[i]!='\0';i++)
    {
    if(up<lo)
    {
        s[i]=lo;
    }
    }
    for(int i=0; s[i]!='\0';i++){

if(up>lo)

    {
        s[i]=up;
    }

    }
    for(int i=0; s[i]!='\0';i++){
    if(up=lo)

    {
        s[i]=lo;
    }
    }

printf("%s",s[i]);
return 0;
}


