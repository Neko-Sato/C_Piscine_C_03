/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:07:59 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/14 23:46:22 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlen(char *str)
{
	unsigned long	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*_str;
	char	*_to_find;

	_str = str;
	_to_find = to_find;
	while (*str)
	{
		to_find = _to_find;
		while (*to_find && *(str + (to_find - _to_find)) == *to_find)
			to_find++;
		if (!*to_find)
			return (str);
		str++;
	}
}
