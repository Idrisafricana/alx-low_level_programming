/**
 * actual_sqrt_recursion - recursive function to calculate the square root
 * @n: number for which to find the square root
 * @i: current value to check
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n, int i)
{
    if (i * i == n)
        return i;
    if (i * i > n)
        return -1;
    return _sqrt_recursion(n, i + 1);
}
