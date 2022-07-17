int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);

}

int	main(int argc, char *argv[])
{	
	if (argc >= 2)
	{
		while (argc > 1)
		{
			nb = atoi(argv[argc - 1]);
			printf("%d\n", ft_sqrt(nb));
			argc --;
		}
	}
	return (0);
}
