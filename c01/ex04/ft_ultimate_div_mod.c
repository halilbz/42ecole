void	ft_ultimate_div_mod(int *a, int *b)
{
	int result;
	result = *a;
	*a = *a / *b;
	*b = result % *b;
}
