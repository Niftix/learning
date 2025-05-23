#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int taille_bit(int n);
int binaire(int *tab, int entier, int taille);
void affichage(int *tableau, int sisize);

int main()
{
	int size = taille_bit(89);
	int *taille = malloc(sizeof(int) * size);
	if (taille == NULL)
	{
		printf("erreur\n");
		return 1;
	}
	binaire(taille, 89, size);
	affichage(taille, size);
	return 0;
}

int taille_bit(int n)
{
	int taille = 0;
	int temp = n;
	while (temp > 0)
	{
	taille++;
	temp = temp >> 1;
	}
	return taille;
}

int binaire(int *tab, int entier, int taille)
{
	int i = 0;
	int temp = entier;
	while (temp > 0)
	{
		if ((temp & 1) == 0)
		{
			tab[i] = 0;
		}
		if ((temp & 1) == 1)
		{
			tab[i] = 1;
		}
		temp = temp >> 1;
		i++;
	}
return *tab;
}

void affichage(int *tableau, int sisize)
{
	int i = 0;
	while(i <= sisize)
	{
		printf("%d", tableau[i]);
		i++;
	}
}
