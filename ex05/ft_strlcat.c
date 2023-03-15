/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:46:23 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/15 14:41:35 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int flag;
	unsigned int i;
	unsigned int j;

	i = 0;
	while (*(dest + i++))
		if (1 > size--)
			flag = 1;
	if (flag)
		return (i);
	j = i;
	while (1 > size-- && *(src + i - j))
		*(dest + i) = *(src + i - j);
	return (i);
}