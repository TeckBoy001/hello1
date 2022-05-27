#include <stdio.h>
#include <unistd.h>



// /**
//  * _sqrt - _sqrt_recursion
//  * @n: integer paramtr
//  * @i: integer parameter
//  * Return: sqrt
//  */
// int _sqrt(int n, int i)
// {
// 	if (n < 0 || (i * i) > n)
// 		return (-1);
// 	/**
// 	 * @brief 
// 	 * if ((i * i) > n)
// 		return (-1);
// 	 */
// 	if (i * i == n)
// 		return (i);
// 	return (_sqrt(n, i + 1));
// }


// /**
//  * _sqrt_recursion - main funct
//  * @n: int n
//  * Return: int
//  */
// int _sqrt_recursion(int n)
// {
// 	return (_sqrt(n, 1));
// }

// int main(void)
// {
//     int r;

//     r = _sqrt_recursion(1);
//     printf("%d\n", r);
//     r = _sqrt_recursion(1024);
//     printf("%d\n", r);
//     r = _sqrt_recursion(16);
//     printf("%d\n", r);
//     r = _sqrt_recursion(17);
//     printf("%d\n", r);
//     r = _sqrt_recursion(25);
//     printf("%d\n", r);
//     r = _sqrt_recursion(-1);
//     printf("%d\n", r);
//     return (0);
// }


// int _pow_recursion(int x, int y)
// {
// 	if (y < 0)
// 	{
// 		return (-1);
// 	}
// 	if (y == 0 )
// 	{
// 		return (1);
// 	}
// 	return (_pow_recursion(x, y-1)*x);
// }

// int main(void)
// {
//     int r;

//     r = _pow_recursion(1, 10);
//     printf("%d\n", r);
//     r = _pow_recursion(1024, 0);
//     printf("%d\n", r);
//     r = _pow_recursion(2, 16);
//     printf("%d\n", r);
//     r = _pow_recursion(5, 2);
//     printf("%d\n", r);
//     r = _pow_recursion(5, -2);
//     printf("%d\n", r);
//     r = _pow_recursion(-5, 3);
//     printf("%d\n", r);
//     return (0);
// }



// int factorial(int n)
// {

// 	if (n < 0 )
// 	{
// 		return (-1);
// 	}
// 	if (n == 1 || n == 0)
// 	{
// 		return (1);
// 	}
// 	return (n * factorial(n-1));
// }



// int main(void)
// {
//     int r;

//     r = factorial(1);
//     printf("%d\n", r);
//     r = factorial(5);
//     printf("%d\n", r);
//     r = factorial(10);
//     printf("%d\n", r);
//     r = factorial(-1024);
//     printf("%d\n", r);
//     return (0);
// }


// int _strlen_recursion(char *s)
// {
// 	if (!*s)
// 	{
// 		return (0);
// 	}
// 	return (1 + _strlen_recursion(++s));
// }
// int main(void)
// {
//     int n;

//     n = _strlen_recursion("Corbin Coleman");
//     printf("%d\n", n);
//     return (0);
// }




// int _putchar(char c)
// {
// 	return (write(1, &c, 1));
// }



// void _print_rev_recursion(char *s)
// {
// 	if (*s)
// 	{
// 		_print_rev_recursion(s + 1);
// 		_putchar(*s);
// 	}
// }

// int main(void)
// {
//     _print_rev_recursion("\nColton Walker");
//     return (0);
// }





// int _putchar(char c)
// {
// 	return (write(1, &c, 1));
// }

// void _puts_recursion(char *s)
// {

// 	if (*s)
// 	{
// 		_putchar(*s);
// 		_puts_recursion(s + 1);
// 	}
// 	// else
// 	// {
// 	// _putchar('\n');
// 	// }
// }



// int main(void)
// {
//     _puts_recursion("Mole is fantastically good");
//     return (0);
// }