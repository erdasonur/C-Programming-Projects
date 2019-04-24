#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *f;
    int c=0, a;
    char arr[100];


    f=fopen("dosya.txt", "r");

    while(!feof(f)){
    arr[c]=fgetc(f);
        c++;
    }
    int b;
    srand(time(NULL));
    /*for(a=0;a<c;a++)
    {

        printf("%d. %c\n",a,arr[a]);
    }*/
    for(a=0;a<c-1;a++)
    {
        b=rand()%(c-1);
        printf("%c ",arr[b]);
    }

    fclose(f);
    return 0;
}
