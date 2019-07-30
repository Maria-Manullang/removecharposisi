#include <stdio.h>
#include <conio.h>
#include <string.h>

void hapus_char(char *x,int a, int b);

 main()
{
     char string[10];
     int n,pos,p;
     //clrscr();

     puts("masukkan kalimat:");
     gets(string);
     printf("posisi berapa yang ingin dihapus:");
     scanf("%d",&pos);
     printf("berapa huruf yang mau dihapus :");
     scanf("%d",&n);
     hapus_char(string, n,pos);
     getch();
}

// Function to delete n characters
void hapus_char(char *x,int a, int b)
{
  if ((a+b-1) <= strlen(x))
  {
    strcpy(&x[b-1],&x[a+b-1]);
    puts(x);
    }
}
