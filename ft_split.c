/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:03:44 by fay               #+#    #+#             */
/*   Updated: 2022/10/07 15:03:47 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int getwords(char const *s,char c)
{
    int wcnt;

    wcnt = 0;
    while (*s != '\0')
    {
        if (*s == c)
            s++;
        else
        {
            wcnt++;
            while(*s != '\0' && *s != c)
                s++;
        }
    }
    return (wcnt);
}


char **ft_split(char const *s,char c)
{
    char **words;
    int len;
    int x;

    x = 0;
    words=malloc(getwords(s,b)*sizeof(*char)+1);
    if (!words)
        return (NULL);
    while (*s != '\0')
    {
        if (*s == c)
            s++;
        else
        {
            len = 0;
            while(*s != '\0' && *s != '\0')
                len++;
            words[x]= malloc(len*sizeof(char)+1);
            while(words[x][i] != '\0')
            {
                words[x][i] = *s
                i++;
        }
    }
    return (words);
}


#include <stdio.h>

int main()
{
    char a[] = "faatihaybbaygfs";
    char b = 'a';
    printf("%d",ft_split(a,b));
}