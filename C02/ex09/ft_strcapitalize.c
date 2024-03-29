/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:15:43 by alycgaut          #+#    #+#             */
/*   Updated: 2022/07/12 14:28:39 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == 45 || str[i -1] == 43)
				str[i] -= 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				str[i] += 32;
			if (str[i -1] >= 'a' && str[i - 1] <= 'z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
