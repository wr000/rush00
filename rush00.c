/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshokhov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:14:38 by eshokhov          #+#    #+#             */
/*   Updated: 2024/08/04 17:46:12 by eshokhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_patterned_line(char edge, char not_edge, int num_of_columns)
{
	int	column;

	column = 0;
	while (column < num_of_columns)
	{
		if (column == 0 || column == num_of_columns - 1)
			ft_putchar(edge);
		else
			ft_putchar(not_edge);
		column++;
	}
}

void	rush00(int x, int y)
{
	int		row;
	int		column;

	row = 0;
	while (row < y)
	{
		if (row == 0 || row == y - 1)
			print_patterned_line('o', '-', x);
		else
			print_patterned_line('|', ' ', x);
		ft_putchar('\n');
		row++;
	}
}
