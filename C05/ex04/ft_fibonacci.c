/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:15:01 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/21 09:49:12 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int	main(int argc, char *argv[])
{
	int	index;

	if (argc >= 2)
	{
		while (argc > 1)
		{
			index = (argv[argc - 1]);
			("%d\n", ft_fibonacci(index));
			argc --;
		}
	}
	return (0);
}*/
