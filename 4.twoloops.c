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
0
1
2
3
4
5
6
7
8
9
10
11
123456789101112
