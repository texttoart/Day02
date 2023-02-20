#include<stdio.h>
#include<unistd.h>

void ft_putnbr(int nb)
{
	int zero;
	zero = 48;
	if (nb >= 0 && nb <= 9)
	{
		char c;
		c = zero + nb;

		write(1, &c, 1);
	}
	if (nb > 9)
	{ 
		/* 17 / 10 = 7
		18 / 10 = 8
		34 / 10 = 4
		68 / 10 = 8
		99 / 10 = 9*/
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 0)
	{
		char c;
		c = '-';
		
		write(1, &c, 1);
		ft_putnbr(nb*-1);
	}
}


int main() {
	int i;
	printf("Quel nombre entre 0 et 9 veux tu afficher ?\n");
	scanf("%d", &i);
	printf("\n");
	ft_putnbr(i);
	printf("\n");
	printf("la valeur est %d\n", i);
	return 0;
}
