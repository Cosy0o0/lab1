#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
char **charSquare(int n);
void drawCharSquare(char **square, int n);
 
int main(int argc, char **argv)
{
    srand(atoi(argv[2]));
    int n;
    n=atoi(argv[1]);
    drawCharSquare(charSquare(n), n);  
}
 
char **charSquare(int n)
{
    char **square;
    square=new char * [n];
    for(int i=0;i<n;i++)
    {
        square[i]=new char[n];
    }
    //Wypelnianie
    int j=0;
    for(int i=0;i<(n*n);i++)
    {
        (!((i+1)%n))?square[j][i]=rand()%26+97,j++:square[j][i]=rand()%26+97;
    }
    return square;
}
 
void drawCharSquare(char **square, int n)
{
    //Wyswietlanie
    int k=0;
    for(int i=0;i<(n*n);i++)
    {
        (!((i+1)%n))?printf("%c",square[k][i]),k++,printf("\n"):printf("%c",square[k][i]);
    }
}