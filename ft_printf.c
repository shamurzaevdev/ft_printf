/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: el <el@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:26:52 by ashamurz          #+#    #+#             */
/*   Updated: 2021/05/30 16:24:59 by el               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int ft_putchar(char c)
{
    return write(1, &c, 1);
}

int ft_putstr(char *str)
{
    int res;
    if (!str)
    {
        return (0);
    }
    res = 0;
    while (*str)
    {
        res += ft_putchar(*str);
        str++;
    }
    return (res);
}

// typedef struct s_args
// {
//     int c;
//     int width;
//     int has_width;
//     int precision;
//     int has_precision;
// }              t_args;

// int ft_isdigit(char c)
// {
//     return (c >= '0' && c <= '9');
// }

// int ft_isspace(char c)
// {
//     return (c >= 9 && c <= 13) || (c == 32);
// }

// int     ft_atoi(char *str)
// {
    
// }

// void    init_args(t_args *args)
// {
//     args->c = 0;
//     args->has_precision = 0;
//     args->has_width = 0;
//     args->precision = 0;
//     args->width = 0;
// }

// char    *read_args(t_args *args, char *itr)
// {
       
// }

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}

int ft_printf(const char *format, ...)
{
    int i;
    char *str;
    char res;
    i = 0;

    str = (char*) format;
    res = ft_putstr(str);
    if (str[i] == ft_strchr(res, '%'))
    {
        ft_putchar('x');
    }
    return (res);
    
    //str = ft_putstr((char*)format);
    // if (str)
    // {
    //     /* code */
    // }

}
   
// TO DO:



int main()
{   
    ft_printf("hell%o");
    return (0);
}
