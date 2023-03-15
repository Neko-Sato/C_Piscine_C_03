/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:07:59 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/15 19:31:41 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return ((void *)0);
}
