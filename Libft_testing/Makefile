# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/25 17:04:04 by ybenkira          #+#    #+#              #
#    Updated: 2018/07/25 19:41:05 by ybenkira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = libft.h

SRC = ft_*.c

EXEC = ft_atoi ft_strcmp ft_strncmp ft_tolower ft_toupper ft_isalpha ft_isdigit \
		ft_isalnum ft_isascii ft_isprint ft_strlen ft_strcpy ft_strncpy ft_strcat

EXEC += ft_strncat ft_strlcat ft_strchr ft_strrchr ft_strstr ft_strdup ft_memset \
		ft_memcpy ft_memccpy

EXEC += ft_putchar ft_putstr ft_putnbr ft_putendl ft_putchar_fd ft_putstr_fd \
		ft_putnbr_fd ft_putendl_fd ft_strmap ft_strequ ft_strsub ft_strjoin


FLAGS = -Wall -W -Werror -Wextra

all : $(EXEC) 

ft_atoi : 
	gcc $(FLAGS) -o exec/ft_atoi atoi_main.c ft_atoi.c 

ft_strcmp : 
	gcc $(FLAGS) -o exec/ft_strcmp strcmp_main.c ft_strcmp.c 

ft_strncmp : 
	gcc $(FLAGS) -o exec/ft_strncmp strncmp_main.c ft_strncmp.c ft_atoi.c 

ft_tolower :
	gcc $(FLAGS) -o exec/ft_tolower tolower_main.c ft_tolower.c 

ft_toupper :
	gcc $(FLAGS) -o exec/ft_toupper toupper_main.c ft_toupper.c 

ft_isalpha : 
	gcc $(FLAGS) -o exec/ft_isalpha isalpha_main.c ft_isalpha.c 

ft_isdigit : 
	gcc $(FLAGS) -o exec/ft_isdigit isdigit_main.c ft_isdigit.c 

ft_isalnum : 
	gcc $(FLAGS) -o exec/ft_isalnum isalnum_main.c ft_isalnum.c ft_isdigit.c ft_isalpha.c

ft_isascii : 
	gcc $(FLAGS) -o exec/ft_isascii isascii_main.c ft_isascii.c ft_atoi.c

ft_isprint : 
	gcc $(FLAGS) -o exec/ft_isprint isprint_main.c ft_isprint.c

ft_strlen : 
	gcc $(FLAGS) -o exec/ft_strlen strlen_main.c ft_strlen.c

ft_strcpy : 
	gcc $(FLAGS) -o exec/ft_strcpy strcpy_main.c ft_strcpy.c ft_strlen.c

ft_strncpy : ft_strlen
	gcc $(FLAGS) -o exec/ft_strncpy strncpy_main.c ft_strncpy.c ft_strlen.c

ft_strcat : 
	gcc $(FLAGS) -o exec/ft_strcat strcat_main.c ft_strcat.c ft_strlen.c ft_strcpy.c

ft_strncat : 
	gcc $(FLAGS) -o exec/ft_strncat strncat_main.c ft_strncat.c ft_strlen.c ft_strcpy.c ft_atoi.c

ft_strlcat : 
	gcc $(FLAGS) -o exec/ft_strlcat strlcat_main.c ft_strlcat.c ft_strlen.c ft_strcpy.c ft_atoi.c

ft_strchr : 
	gcc $(FLAGS) -o exec/ft_strchr strchr_main.c ft_strchr.c 

ft_strrchr : 
	gcc $(FLAGS) -o exec/ft_strrchr strrchr_main.c ft_strrchr.c 

ft_strstr : 
	gcc $(FLAGS) -o exec/ft_strstr strstr_main.c ft_strstr.c 

ft_strdup : 
	gcc $(FLAGS) -o exec/ft_strdup strdup_main.c ft_strdup.c ft_strlen.c ft_strcpy.c

ft_memset : 
	gcc $(FLAGS) -o exec/ft_memset memset_main.c ft_memset.c ft_atoi.c

ft_memcpy : 
	gcc $(FLAGS) -o exec/ft_memcpy memcpy_main.c ft_memcpy.c ft_bzero.c ft_atoi.c ft_memset.c

ft_memccpy : 
	gcc $(FLAGS) -o exec/ft_memccpy memccpy_main.c ft_memccpy.c ft_bzero.c ft_atoi.c ft_memset.c

ft_putchar : 
	gcc $(FLAGS) -o exec/ft_putchar putchar_main.c ft_putchar.c 

ft_putstr : 
	gcc $(FLAGS) -o exec/ft_putstr putstr_main.c ft_putstr.c ft_strlen.c 

ft_putendl : 
	gcc $(FLAGS) -o exec/ft_putendl putendl_main.c ft_putendl.c ft_putchar.c ft_putstr.c ft_strlen.c

ft_putnbr : 
	gcc $(FLAGS) -o exec/ft_putnbr putnbr_main.c ft_putnbr.c ft_atoi.c ft_putchar.c

ft_putchar_fd : 
	gcc $(FLAGS) -o exec/ft_putchar_fd putchar_fd_main.c ft_putchar_fd.c ft_atoi.c

ft_putstr_fd : 
	gcc $(FLAGS) -o exec/ft_putstr_fd putstr_fd_main.c ft_putstr_fd.c ft_strlen.c ft_atoi.c

ft_putendl_fd : 
	gcc $(FLAGS) -o exec/ft_putendl_fd putendl_fd_main.c ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c ft_atoi.c

ft_putnbr_fd : 
	gcc $(FLAGS) -o exec/ft_putnbr_fd putnbr_fd_main.c ft_putnbr_fd.c ft_atoi.c ft_putchar_fd.c

# ft_striter : 
# 	gcc $(FLAGS) -o exec/ft_striter striter_main.c ft_striter.c ft_putstr.c

ft_strmap : 
	gcc $(FLAGS) -o exec/ft_strmap strmap_main.c ft_strmap.c ft_strlen.c ft_strnew.c ft_memset.c

ft_strequ : 
	gcc $(FLAGS) -o exec/ft_strequ strequ_main.c ft_strequ.c ft_strcmp.c

ft_strsub : 
	gcc $(FLAGS) -o exec/ft_strsub strsub_main.c ft_strsub.c ft_strnew.c ft_memset.c ft_atoi.c

ft_strjoin : 
	gcc $(FLAGS) -o exec/ft_strjoin strjoin_main.c ft_strjoin.c ft_strnew.c ft_memset.c ft_strcat.c ft_strlen.c ft_strcpy.c

clean : 
	rm *.o

fclean : 
	rm exec/ft_atoi

norminette : 
	norminette $(SRC) $(HEADER)

ls : 
	ls ft_*.c
