int	ft_recursive_power(int nb, int power)
{
	int	value;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		value = nb * ft_recursive_power(nb, power - 1);
	}
	return (value);
}
