/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofirouzb <ofirouzb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 21:06:05 by ofirouzb          #+#    #+#             */
/*   Updated: 2024/08/15 23:10:43 by ofirouzb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *p)
{
	*p = 42;
}
int	main(void)
{
	int	n;
	ft_ft(&n);
	printf("%d\n", n);
	return (0);
}
