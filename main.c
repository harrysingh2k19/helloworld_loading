#include <stdio.h>
#include <stdlib.h>

void slow()
{
    for(int o=0;o<50000000;o++);
}

int main()
{
    printf("\n\n\t\t");
    char hel[]={'H','e','l','l','o',' ','W','o','r','l','d','!'};
    for(int i =0 ;i<=11;i++)
    {
        printf("%c",hel[i]);
        slow();
    }
    printf("\n\n\n\n");
    return 0;
}
