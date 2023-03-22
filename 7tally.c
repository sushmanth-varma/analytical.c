#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},b[5]={10,20,30,40,50},tally;
    for(tally=0;tally<5;tally++)
    *(a+tally)=*(tally+a)+*(b+tally);
    for(tally=0;tally<5;tally++)
    printf("%d",*(a+tally));
    return 0;
}
