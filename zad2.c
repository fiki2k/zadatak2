//Zadatak je uneseni broj napisani u obratnom redoslijedu, koristeci while petlju.

#include<stdio.h>
int main()
{
   int br,ostatak,obrnut_br=0;
   //Unesi broj
   printf("Unesi neki broj:");
   scanf("%d",&br);

   while(br>=1)
   {
      ostatak = br % 10;
      obrnut_br = obrnut_br * 10 + ostatak;
      br = br / 10;
   }

   printf("\nUnesen broj u obrnutom redoslijedu: %d", obrnut_br);
   return 0;
}
