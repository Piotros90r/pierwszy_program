#include <stdio.h>

/*kalkulator*/

int mnoz(int a, int b){ return a*b; }
int dodaj(int a, int b){ return a+b; }
int odejmnij(int a, int b){ return a-b; }
int dziel(int a, int b){ return a/b; }


int main(void)
{
	int a=2, b=5; /* deklaracja wraz z inicjalizacja */
	char wybor ='*';
	
	scanf("%c", &wybor);

	if(wybor == '*'){printf("wynik mnozenia %i\n", mnoz(a, b)); }

	if(wybor == '/'){printf("wynik dzielenia %i\n", dziel(a, b)); } 

	if(wybor == '+'){printf("wynik dodawania %i\n", dodaj(a, b)); } 

	if(wybor == '-'){printf("wynik odejmowania %i\n", odejmnij(a, b)); } 

/* gdy zaden warunek nie jest spelniony */


	printf("Niewlasciwy znak");
	printf("Error Haslo Bledne Haslo");
		return 0;
}
