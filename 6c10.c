#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int j;
    for(j=0;j<5;j++)
    {
        printf("%d\n",a[j]);
        a[j]++;
    }
    return 0;
}
