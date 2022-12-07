# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lhoukes <lhoukes@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/22 08:51:43 by lhoukes       #+#    #+#                  #
#    Updated: 2021/10/20 13:58:53 by lhoukes       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_FILES 	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
					ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c \
					ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c \
					ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isdigit.c \
					ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
					ft_strchr.c ft_strnstr.c ft_strdup.c ft_calloc.c \
					ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c \
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
					ft_strmapi.c ft_split.c
OBJECT_SRC = $(SRC_FILES:.c=.o)

BONUS_FILES = 	ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c \
					ft_lstlast.c ft_lstsize.c ft_lstdelone.c ft_lstclear.c \
					ft_lstiter.c ft_lstmap.c
OBJECT_BONUS = $(BONUS_FILES:.c=.o)
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror
HEADER_FILE = libft.h
RM = rm -f

ifdef BONUS
OBJ_FILES = $(OBJECT_SRC) $(OBJECT_BONUS)
else
OBJ_FILES = $(OBJECT_SRC)
endif

all: $(NAME)
$(NAME): $(OBJ_FILES)
			@$(LIBC) $(NAME) $(OBJ_FILES)
			@echo "Hello! Let the magic begin!"
			@echo "First off: the compiling process..."
			@echo "Great Job! That was succesful"
			@echo "Next step: create a library"
			@echo "Succesfully created a library"
			@echo "That was great! Start running those tests!"

%.o: %.c $(HEADER_FILE)
			@$(CC) -c $(FLAGS) -o $@ $<

bonus:
			@$(MAKE) BONUS=1 all
			@echo "Great! Bonus Part(y) Time!"

clean:
			@echo "All done, it's time to 'Marie kondo' - smile"
			@echo "Remove object files...thank you"
			@$(RM) $(OBJ_FILES) $(OBJECT_BONUS)
			@echo "Deleted!"

fclean:		clean
			@echo "Remove executable..."
			@$(RM) $(NAME)
			@echo "Deleted!"
			@echo "Thank you for taking the time to review my work!"
			@echo "...and remember: Don't Panic... 42 is the answer!"
re:
	$(MAKE) fclean
	$(MAKE) all
.PHONY: all clean fclean re



# NAME = libft.a
# SRC_FILES 	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
# 					ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c \
# 					ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c \
# 					ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isdigit.c \
# 					ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
# 					ft_strchr.c ft_strnstr.c ft_strdup.c ft_calloc.c \
# 					ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c \
# 					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
# 					ft_strmapi.c ft_split.c
# OBJECT_SRC = $(SRC_FILES:.c=.o)

# BONUS_FILES = 	ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c \
# 					ft_lstlast.c ft_lstsize.c ft_lstdelone.c ft_lstclear.c \
# 					ft_lstiter.c ft_lstmap.c

# LIBC = ar -rcs
# FLAGS = -Wall -Wextra -Werror
# HEADER_FILE = libft.h
# RM = rm -f

# ifdef BONUS
# OBJ_FILES = $(OBJECT_SRC) $(OBJECT_BONUS)
# else
# OBJ_FILES = $(OBJECT_SRC)
# endif

# all: $(NAME)
# $(NAME): $(OBJ_FILES)
# 			@$(LIBC) $(NAME) $(OBJ_FILES)
# 			@echo "Hello! Let the magic begin!"
# 			@echo "First off: the compiling process..."
# 			@echo "Great Job! That was succesful"
# 			@echo "Next step: create a library"
# 			@echo "Succesfully created a library"
# 			@echo "That was great! Start running those tests!"

# %.o: %.c $(HEADER_FILE)
# 			@$(CC) -c $(FLAGS) -o $@ $<

# bonus:
# 			@$(MAKE) BONUS=1 all
# 			@echo "Great! Bonus Part(y) Time!"

# clean:
# 			@echo "All done, it's time to 'Marie Kondo' - smile"
# 			@echo "Remove object files...thank you"
# 			@$(RM) $(OBJ_FILES) $(OBJECT_BONUS)
# 			@echo "Deleted!"

# fclean:		clean
# 			@echo "Remove executable..."
# 			@$(RM) $(NAME)
# 			@echo "Deleted!"
# 			@echo "Thank you for taking the time to review my work!"
# 			@echo "...and remember: Don't Panic... 42 is the answer!"
# re:
# 	$(MAKE) fclean
# 	$(MAKE) all
# .PHONY: all clean fclean re
