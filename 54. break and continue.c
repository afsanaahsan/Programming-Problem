#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<20; i++)
    {
        if(i%3==0)
            continue;  //niche r nambe na ekebare for e chole jabe karon if er moddhe condition true//
        printf("%d\n", i);

        if(i==10)
            break;  //program ke ekebare off kore dibe mane ses kore dibe//
    }
    return 0;


}
