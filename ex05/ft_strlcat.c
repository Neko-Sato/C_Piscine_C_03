/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2023/03/13 16:07:39 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/15 12:59:22 by hshimizu         ###   ########.fr       */
=======
/*   Created: 2023/03/15 13:46:23 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/15 14:41:35 by hshimizu         ###   ########.fr       */
>>>>>>> 4a20a09ba1d0d56014bda8f4b377ec537f185016
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

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
<<<<<<< HEAD
	char * _dest;

	_dest = dest;
	while (1 < size-- && *dest)
		dest++;
	while (1 < size-- && *src)
		*(dest++) = *(src++);
	// *dest = '\0';
	return (ft_strlen(_dest));
}


#include <stdio.h>
#include <string.h>

int    main(void)
{
    char dest1[20] = "ABCDE";
    char src1[] = "1234";
    char dest2[20] = "ABCDE";
    char src2[] = "1234";
    char dest3[20] = "ABCDE";
    char src3[] = "1234";
    char dest4[20] = "ABCDE";
    char src4[] = "1234";
    char dest5[20] = "ABCDE";
    char src5[] = "1234";
    char dest6[20] = "ABCDE";
    char src6[] = "1234";

    int x = 2;
    unsigned int result1 = ft_strlcat(dest1, src1, x);
    printf("ft: %s: %u\n", dest1, result1);
    unsigned int resule2 = strlcat(dest2, src2, x);
    printf("lib %s: %u\n", dest2, resule2);

    int y = 7;
    unsigned int result3 = ft_strlcat(dest3, src3, y);
    printf("ft: %s: %u\n", dest3, result3);
    unsigned int result4 = strlcat(dest4, src4, y);
    printf("lib %s: %u\n", dest4, result4);

    int z = 13;
    unsigned int result5 = ft_strlcat(dest5, src5, z);
    printf("ft: %s: %u\n", dest5, result5);
    unsigned int result6 = strlcat(dest6, src6, z);
    printf("lib %s: %u\n", dest6, result6);
    return (0);
=======
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
>>>>>>> 4a20a09ba1d0d56014bda8f4b377ec537f185016
}