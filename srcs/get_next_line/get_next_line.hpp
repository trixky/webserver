#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H

# define BUFFER_SIZE_GNL 1000

typedef struct	s_st
{
	char	buffer[BUFFER_SIZE_GNL + 1];
	int		i;
	int		ret;
	int		last_fd;
	int		lu;
}				t_st;

int				get_next_line(int fd, char **line);
int				ft_strlen(char *str);
void			ft_init_line_buffer_lu(char ***line, char *buffer, int *lu);
int				ft_fd_manager(int fd, int *i, int *ret, int *last_fd);
void			ft_add_char(char **line, char c);

#endif
