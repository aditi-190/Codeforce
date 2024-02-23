#include<stdio.h>
int main()
{
   char s1[1000] ;
   scanf("%s",&s1);
   s1[0]=toupper(s1[0]);
   printf("%s",s1);

    return 0;


}
