/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:46:23 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/15 16:36:29 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	remaining_size;
	char			*dest_end;
	char			*src_ptr;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	remaining_size = (size > len_dest) * (size - len_dest);
	dest_end = dest + len_dest;
	src_ptr = src;
	while (*dest_end && remaining_size > 0)
	{
		dest_end++;
		remaining_size--;
	}
	while (*src_ptr && remaining_size > 1)
	{
		*dest_end++ = *src_ptr++;
		remaining_size--;
	}
	*dest_end = '\0';
	return (len_dest + len_src);
}
