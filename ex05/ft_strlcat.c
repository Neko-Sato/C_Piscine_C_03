/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:07:39 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/15 00:08:39 by hshimizu         ###   ########.fr       */
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
	char	*_dest;

	_dest = dest;
	while (*dest)
		dest++;
	while (1 < size-- && *src)
		*(dest++) = *(src++);
	*dest = '\0';
	return ft_strlen(_dest);
}
