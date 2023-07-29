#include <stdio.h>

void	horizon(int a);

void	horizon(int a)
{
	int i;
	i = a;
	while (i < (a + 1))
	{
		printf("A");
		printf("B");
		printf("B");
		printf("B");
		printf("C");
		i++;
	}
}

void	vertical(int b);

void	vertical(int b)
{
	int j;
	j = b;
	while (j < (b + 1))
	{
		if (j == 3)
		{
			printf("B  B");
		}
		else
		{//multiple printf//
			printf("B");
		}		
		j++;
	}
}

void	rush(void);

void	rush(int x, int y)
{
	if (x > 0 || y > 0)
	{
		horizon(1);
		printf("\n");
		vertical(3);
		printf("\n");
		horizon(1);
		printf("\n");
	}
	else
	{
		printf("Wrong user input, exiting.\n");	
	}
}

int	main(void)
{
	rush(1, 1);
	return (0);
}


/*int	main(int argc, unsigned int x, unsigned int y)
{
if argc == 3
// Check how to verify data type used is correct //
	{
	//rush(x, y)//
	}
	else 
	{
	printf("Wrong input, exiting now\n");
	}
	return(0);
}*/
