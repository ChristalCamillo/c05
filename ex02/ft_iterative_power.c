int	ft_iterative_power(int nb, int power)
{
	int	value;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	i = 1;
	value = nb;
	while (i < power)
	{
		value = value * nb;
		i++;
	}
	return (value);
}
