/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 22:53:10 by yuxu              #+#    #+#             */
/*   Updated: 2017/11/16 22:16:49 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (tab[n])
	{
		if (f(tab[n]) == 1)
		{
			i++;
			n++;
		}
		else
			n++;
	}
	return (i);
}
