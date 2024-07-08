/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibozkurt <ibozkurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:35:59 by ibozkurt          #+#    #+#             */
/*   Updated: 2024/07/08 14:36:01 by ibozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		ilk;
	int		gec;

	while (size >= 0)
	{
		ilk = 0;
		while (ilk < size - 1)
		{
			if (tab[ilk] > tab[ilk + 1])
			{
				gec = tab[ilk];
				tab[ilk] = tab[ilk + 1];
				tab[ilk + 1] = gec;
			}
			else
			{
				ilk++;
			}
		}
		size--;
	}
}
