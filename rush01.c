/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza.qwassmeh <hamza.qwassmeh@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:34:33 by hamza.qwassme     #+#    #+#             */
/*   Updated: 2025/07/05 12:37:48 by hamza.qwassme    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int x, int y, int i, int j)
{
	if (i == 0 && j == 0)
		ft_putchar('/');
	else if (i == 0 && j == x - 1)
		ft_putchar('\\');
	else if (i == y - 1 && j == 0)
		ft_putchar('\\');
	else if (i == y - 1 && j == x - 1)
		ft_putchar('/');
	else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print_char(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
