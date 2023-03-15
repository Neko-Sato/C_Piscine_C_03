/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:07:59 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/15 19:00:03 by hshimizu         ###   ########.fr       */
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

#include        <stdio.h>
#include        <strings.h>

int main(void)
{
        char    s1[] = "abcdefghijklmn";        /* 検索対象文字列 */
        char    s2[] = "defgh";                 /* 一致する場合 */
        char    s3[] = "xyz";                   /* 一致しない場合 */
        char    s4[] = "abcdefghijklmnopqr";    /* 検索対象文字列より長い場合 */
        char    s5[] = "";                      /* \0 */
        char    *sp;
        
        printf("一致する場合 : %s\n",ft_strstr(s1,s2));
        printf("一致しない場合 : %s\n",ft_strstr(s1,s3));
        printf("検索対象文字列より長い場合 : %s\n",ft_strstr(s1,s4));
        printf("\\0 : %s\n",ft_strstr(s1,s5));
        
        return 0;
}