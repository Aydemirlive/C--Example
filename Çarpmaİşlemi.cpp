#include <stdio.h>
#include <stdlib.h>
int carp(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
int main()
{
    int sayi1,sayi2,sonuc;
    printf("Carpma islemi icin iki sayi girin.\n");
    scanf("%d%d",&sayi1,&sayi2);
    sonuc=carp(sayi1,sayi2);
    printf("Islemin sonucu:%d\n",sonuc);
    system("PAUSE");
    return 0;
}
