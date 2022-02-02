/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:09:52 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/11/15 16:48:23 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_current_line(char	**tmp_holder);
char		*read_file(size_t size_read, char *buffer, int fd);
static char	*ft_strjoin_and_free(char *s1, char *s2);

char	*get_next_line(int fd)
{
	char			buffer[BUFFER_SIZE + 1];
	size_t			size_read;
	char			*line;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, buffer, 0) < 0)
		return (NULL);
	size_read = read(fd, buffer, BUFFER_SIZE);
	if (size_read < 0)
		return (NULL);
	line = read_file(size_read, buffer, fd);
	return (line);
}

char	*read_file(size_t size_read, char *buffer, int fd)
{
	static char	*holder[MAX_OPEN];
	char		*tmp_holder;
	char		*line;

	while (size_read > 0)
	{
		buffer[size_read] = '\0';
		if (holder[fd] == 0)
			holder[fd] = ft_strdup("");
		tmp_holder = ft_strdup(holder[fd]);
		free(holder[fd]);
		holder[fd] = ft_strjoin_and_free(tmp_holder, buffer);
		if (ft_strchr(holder[fd], '\n'))
			break ;
		size_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (buffer == 0 || holder[fd] == 0)
		return (NULL);
	line = get_current_line(&holder[fd]);
	return (line);
}

static char	*ft_strjoin_and_free(char *s1, char *s2)
{
	char	*new_str;
	size_t	size_s1;
	size_t	size_s2;

	new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_str)
		return (NULL);
	size_s1 = -1;
	size_s2 = -1;
	while (s1[++size_s1])
		new_str[size_s1] = s1[size_s1];
	while (s2[++size_s2])
		new_str[size_s1 + size_s2] = s2[size_s2];
	new_str[size_s1 + size_s2] = '\0';
	free(s1);
	s1 = NULL;
	return (new_str);
}

static char	*get_current_line(char	**tmp_holder)
{
	char	*line;
	char	*tmp;
	int		size;

	size = 0;
	while (((*tmp_holder)[size] != '\n') && ((*tmp_holder)[size] != '\0'))
		size++;
	if ((*tmp_holder)[size] == 0)
	{
		line = ft_strdup(*tmp_holder);
		free(*tmp_holder);
		*tmp_holder = NULL;
	}
	else
	{
		line = ft_substr(*tmp_holder, 0, size + 1);
		tmp = ft_strdup(&(*tmp_holder)[size + 1]);
		free(*tmp_holder);
		*tmp_holder = NULL;
		if (*tmp)
			*tmp_holder = ft_strdup(tmp);
		free(tmp);
		tmp = NULL;
	}
	return (line);
}
