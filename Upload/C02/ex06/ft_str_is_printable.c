/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofirouzb <ofirouzb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:13:03 by ofirouzb          #+#    #+#             */
/*   Updated: 2024/08/08 11:05:33 by ofirouzb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return(1);
}
