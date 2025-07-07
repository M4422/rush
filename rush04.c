/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmad.rababa <ahmad.rababa@learner.42.tec  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:46:53 by ahmad.rababa      #+#    #+#             */
/*   Updated: 2025/07/05 09:59:04 by ahmad.rababa     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			if (i == 0 && j == 0)
				ft_putchar('A');
			else if (i == 0 && j == x - 1)
				ft_putchar('C');
			else if (i == y - 1 && j == 0)
				ft_putchar('C');
			else if (i == y - 1 && j == x - 1)
				ft_putchar('A');
			else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}
