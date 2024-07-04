/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <jbocktor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:07:39 by jbocktor          #+#    #+#             */
/*   Updated: 2024/01/15 17:21:45 by jbocktor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*get_next_malloc(char *s);
char	*reading(int fd);
char	*buffer_in_stach(char *old_stach, const char *buffer, size_t byte);
char	*null_free(char *s);
size_t	len_until_n(const char *s);
size_t	len_after_n(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_slash_n(char *old_stash, size_t size, size_t after_backslash);

#endif
