/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfradj <yfradj@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:19:25 by yfradj            #+#    #+#             */
/*   Updated: 2024/11/25 13:33:53 by yfradj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# else
#  if BUFFER_SIZE > 1999999
#   undef BUFFER_SIZE
#   define BUFFER_SIZE 1999999
#  endif
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_keep_after(char *stock);
char	*ft_getline(char *stock);
char	*ft_strjoin(char *s1, char *s2);
int		is_in(char *str);
void	*clean_stock(char **stock);
char	*get_next_line2(char **stock, char **tmp);

#endif