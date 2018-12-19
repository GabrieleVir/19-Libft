/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strljoin_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvirga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 17:09:02 by gvirga            #+#    #+#             */
/*   Updated: 2018/12/19 17:09:07 by gvirga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_memljoin(char const *s1, char const *s2, int n, int l)
{
	int		i;
	int		u;
	char	*conc_str;

	i = -1;
	if ((conc_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
	{
		while (++i < n)
			conc_str[i] = s1[i];
		u = -1;
		while (++u < l)
			conc_str[i++] = s2[u];
		conc_str[i] = '\0';
	}
	return (conc_str);
}
