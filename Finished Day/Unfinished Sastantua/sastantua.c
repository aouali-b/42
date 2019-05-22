/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 20:15:01 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/25 13:04:23 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int floorwidth(int i)
{
    
    if (i == 0)
        return(7);
    return (floorwidth(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}

void    printdoor(int size, int o)
{
    int doorwidth = size;
    if (doorwdith % 2 == 0)
    {
        door width—;
    }
    while (o < door width)
    {
        ft_putchar(‘|’)
        o++;
    }
}

void    floorr(int height, int width, int spaces)
{
    int i;
    int j;
    char a;
    
    i = 0;
    while (i < height)
    {
        j = -spaces;
        while (j < height - 1 - i)
        {
            printf(" ");
            j++;
        }
        printf("/");
        j += height - 1 - i;
        while (j < width)
        {
            printf(“%s”, a);
            j++;
        }
        printf("\\");
        printf("\n");
        i++;
    }
}

void    sastantua(int size)
{
    int i;
    //just an example
    int height;
    int width;
    int spaces;
    
    i = 0;
    
    while(i < size)
    {
        spaces = (floorwidth(size - 1) - floorwidth(i)) / 2;
        height = 3 + i;
        width = floorwidth(i);
        floorr(height, width, spaces);
        i++;
    }
}

int main()
{
    sastantua(6);
    
    return 0;
}

