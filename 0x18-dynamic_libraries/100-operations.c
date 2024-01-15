int add(int c, int d);
int sub(int c, int d);
int mul(int c, int d);
int div(int c, int d);
int mod(int c, int d);

/**
* add - function that adds two integers
* @i: first integer to add
* @k: second integer to add
* Return: the sum
*/

int add(int c, int d)
{
	return (c + d);
}

/**
* sub - function that subtracts two integers
* @i: first integer to add
* @k: second integer to add
* Return: the subtract
*/

int sub(int c, int d)
{
	return (c - d);
}

/**
* mul - function that multiplies two integers
* @i: first integer to add
* @k: second integer to add
* Return: the multiple
*/

int mul(int c, int d)
{
	return (c * d);
}

/**
* div - function that divideds two integers
* @i: first integer to add
* @k: second integer to add
* Return: the dividend integer
*/

int div(int c, int d)
{
	return (c / d);
}

/**
  mod - functions that finds the modulus of two integers
  @i: first integer to add
  @k: second integer to add
  Return: the modulus
*/

int mod(int c, int d)
{
	return (c % d);
}
