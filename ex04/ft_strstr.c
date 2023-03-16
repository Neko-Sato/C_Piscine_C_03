/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:07:59 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/16 14:22:21 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*_str;
	char	*_to_find;

	_str = str;
	_to_find = to_find;
	while (1)
	{
		to_find = _to_find;
		while (*to_find && *(str + (to_find - _to_find)) == *to_find)
			to_find++;
		if (!*to_find)
			return (str);
		if (!*str)
			break ;
		;
		str++;
	}
	return ((void *)0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "";                    /* 検索対象文字列 */
	char s2[] = ""; /* 一致する場合 */ /* \0 */
	char *sp;

	puts("strstr:");
	sp = strstr(s1, s2);
	printf("%s\n", sp);

	puts("ft_strstr:");
	sp = ft_strstr(s1, s2);
	printf("%s\n", sp);
}