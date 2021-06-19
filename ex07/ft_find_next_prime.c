int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
	{
		return (0);
	}
	while (++i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
