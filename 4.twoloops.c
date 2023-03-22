#include<stdio.h>
main()
{
    int j;
    char s[]="wellcomeuall";
    for(j=0;s[j];j++)
    printf("%d\n",j);
    j=0;
    while(s[j++])
    printf("%d",j);
}
