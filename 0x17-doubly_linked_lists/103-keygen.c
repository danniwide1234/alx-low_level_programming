#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - function that finds the biggest number
 *
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */

int f4(char *usrn, int len)
{
	int cha;
	int vcha;
	unsigned int rand_num;

	cha = *usrn;
	vcha = 0;

	while (vcha < len)
	{
		if (cha < usrn[vcha])
			cha = usrn[vcha];
		vcha += 1;
	}

	srand(cha ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - function that multiplies each char of username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */
int f5(char *usrn, int len)
{
	int cha;
	int vcha;

	cha = vcha = 0;

	while (vcha < len)
	{
		cha = cha + usrn[vcha] * usrn[vcha];
		vcha += 1;
	}

	return (((unsigned int)cha ^ 239) & 63);
}

/**
 * f6 - function that generates a random char
 *
 * @usrn: username
 * Return: a random char
 */
int f6(char *usrn)
{
	int cha;
	int vcha;

	cha = vcha = 0;

	while (vcha < *usrn)
	{
		cha = rand();
		vcha += 1;
	}

	return (((unsigned int)cha ^ 229) & 63);
}

/**
 * main - Entry point function
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, cha, vcha;
	long omega[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)omega)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	cha = vcha = 0;
	while (vcha < len)
	{
		cha = cha + argv[1][vcha];
		vcha = vcha + 1;
	}
	keygen[1] = ((char *)omega)[(cha ^ 79) & 63];
	/* ----------- f3 ----------- */
	cha = 1;
	vcha = 0;
	while (vcha < len)
	{
		cha = argv[1][vcha] * cha;
		vcha = vcha + 1;
	}
	keygen[2] = ((char *)omega)[(cha ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)omega)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)omega)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)omega)[f6(argv[1])];
	keygen[6] = '\0';
	for (cha = 0; keygen[cha]; cha++)
		printf("%c", keygen[cha]);
	return (0);
}
