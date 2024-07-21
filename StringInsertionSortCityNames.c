#include<stdio.h>
#include<conio.h>
#include<string.h>

size_t removeNewLine(char []);

size_t removeNewLine(char s[])
{
    int l=strlen(s);
    if(l>0 && s[l-1]=='\n')
    {
        s[l-1]='\0';

    }

}

void sortStrings(char city[][30], int n)
{
    int i, round;
    char temp[30];
    for(round=0 ; round<n ; round++) //Insertion Sort
    {
        strcpy(temp, city[round]);
        for(i=round-1 ; i>=0 && strcmp(city[i], temp)>0; i--)
        {
            strcpy(city[i+1], city[i]);
        }
        strcpy(city[i+1], temp);
    }
}

int main()
{
    char cities[5][30];
    int i;
    printf("Enter 5 City names : -\n");
    for( i=0 ; i<5 ; i++)
        fgets(cities[i], sizeof(cities[i]), stdin);

    for(i=0 ; i<5 ; i++)
        removeNewLine(cities[i]);

    printf("\nCity names you entered: -\n");
    for( i=0 ; i<5 ; i++)
        puts(cities[i]);

    sortStrings(cities, 5);

    printf("\nSorted City names: -\n");
    for( i=0 ; i<5 ; i++)
        puts(cities[i]);

    getch();
    return 0;

}

