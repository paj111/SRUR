#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char **argv)
{
int i;
  char opcija;
  for(i = 0; i < argc; i++)
  {
    printf ("argv[%d] : Uneti string je - %s\n", i, argv[i]);
  }
  
	do
	{
		printf("----MENI----\n");
		printf("Opcija = 1 - Sva slova iz stringa prebaciti u velika slova\n");
		printf("Opcija = 2 - Sortiranje slova iz stringa po abecednom redu\n");
    printf("Opcija = 3 - Izbaciti brojeve iz stringa\n");
    printf("Opcija = 4 - Provera da li je string palindrom\n");
    printf("Opcija = 5 - Exit\n");
    
    opcija = getchar();
    
		switch (opcija)
		{
			case 1:
				printf("treba prebaciti u velika slova\n");
				break;
        
			case 2:
				printf("sortira\n");
				break;
        
			case 3:
        printf("treba da izbaci brojeve\n");
				break;
        
			case 4:
				printf("provera da li je palindrom\n");
				break;
        
			case 5:
				printf("Izlazak iz programa.\n");
        exit(0;)
			  break;

			default:
        printf("Pogresan izbor. Molim vas unesite ponovo.\n");
			  break;
		}
    while( opcija == '\n'){
      opcija = getchar();
    }
	}while(opcija != 5);
return 0;
}
