#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int a,b;

int main()
{
    srand(time(0));
    b=rand()%5;
    puts("Guess a number form 0 to 4");
    scanf("%d",&a);
    if(a==b)puts("Right");
    else printf("Wrong.The number should be %d.\n",b);
    return 0;
}