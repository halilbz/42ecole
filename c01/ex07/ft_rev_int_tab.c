/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibozkurt <ibozkurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:35:03 by ibozkurt          #+#    #+#             */
/*   Updated: 2024/07/08 14:35:05 by ibozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		ilk;
	int		son;
	int		gec;

	ilk = 0;
	son = size - 1;
	while (ilk < size / 2)
	{
		gec = tab[son];
		tab[son] = tab[ilk];
		tab[ilk] = gec;
		ilk++;
		son--;
	}
}
