#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[7], i;
	
	for(i=0; i<7; i++)
	{
		printf("Insira um valor para o �ndice %i:", i);
		scanf("%i", &vetor[i]);
	}
	
	printf("N�meros m�ltiplos de 02: ");
	for(i=0; i<7; i++)
	{
		if(vetor[i]%2 == 0)
		{
			printf("[%i] ", vetor[i]);
		}
	}
	
	printf("\nN�meros m�ltiplos de 03: ");
	for(i=0; i<7; i++)
	{
		if(vetor[i]%3 == 0)
		{
			printf("[%i] ", vetor[i]);
		}
	}
	
	printf("\nN�meros m�ltiplos de 02 e 03: ");
	for(i=0; i<7; i++)
	{
		if(vetor[i]%2 == 0 && vetor[i]%3 == 0)
		{
			printf("[%i] ", vetor[i]);
		}
	}
}
