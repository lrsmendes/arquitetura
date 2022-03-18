#include <stdio.h>
#include <stdlib.h>
// oh meu deus, eu sou um programador!!!
/*
int main(int argc, char *argv[])
{
  float num = 25;  
  puts("EXIBINDO\n\nVARIAVEIS\n");
  printf("Variavel: %2.1f\n\n",num);
  printf("Valor: %u\n\n",&num);
  puts("by Raziel, (c)2022\n\nTODOS DIREITOS RESERVADOS!!!\n"); 
  system ("COLOR 47");
  system("PAUSE");	
  return 0;
}*/

/*
int main(int argc, char *argv[])
{
  float num;  
  puts("DIGITE UM VALOR QUALQUER\n");
  scanf("%f", &num);
  printf("\nVariavel: %2.2f\n\n",num);
  printf("Valor: %2.5f\n\n",&num);
  puts("by Raziel, (c)2022\n\nTODOS DIREITOS RESERVADOS!!!\n"); 
  system ("COLOR 47");
  system("PAUSE");	
  return 0;
  
} 
*/

int main(int argc, char *argv[])
{
    puts ("TABELA A.S.C.I.I - by Raziel, (c)2022");
    system ("COLOR 47");
    int pt=0;
    for(pt;pt<=255;pt++)
    {
    printf ("\nDec: %d Hex: %x Oct: %o Char: (a ser implementado.) \n\n", pt);
    sleep(20);
    }
    puts ("\nDedico uma maracujina pra voce, bicho! Ride on, baby!\n");
system ("PAUSE");

return 0;
}
