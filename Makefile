NAME 			= cub3D
SRC_FILES 		= main.c ./gnl/get_next_line.c ./gnl/get_next_line_utils.c
HEADERS			= ./includes/*.h
LIBFT			= ./libft/libft.a

DIR_OBJ			= ./obj
OBJS_FILES 		= $(addprefix $(DIR_OBJ)/, ${SRC_FILES:.c=.o})

CC 				= gcc
CFLAGS 			= -Wall -Werror -Wextra

RM 				= rm -f

#-------------------------------------------#
BLUE			=	\033[38;5;30m
GREEN			= 	\033[38;5;43m
RED				=	\033[38;5;124m
PINK			= 	\033[38;5;167m
ORANGE			=	\033[38;5;208m
NO_COLOR		=	\033[0m
#-------------------------------------------#

all:			$(LIBFT) ${NAME} ${HEADERS}

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):		${OBJS_FILES}
				make -C MLX42
				cp MLX42/libmlx42.a ./
				@echo "\033[38;5;33mcompiling project: \033[0m"
				$(CC) $(CFLAGS) $(OBJS_FILES) $(LIBFT) libmlx42.a -I include -lglfw3 -framework Cocoa -framework OpenGL -framework IOKit -o $@
				@echo "\033[38;5;37mGame: CUB3D aMAZEing\033[0m"
				@echo "\033[38;5;38m use⬅️ ⬆️ ⬇️ ➡️ or WASD to move in space\033[0m"
				@echo "\033[38;5;51mBeware of the Walls!\033[m"
				@echo "\033[38;5;51mEnjoy your journey!\033[m"



$(DIR_OBJ)/%.o: %.c includes/cub3d.h
				@mkdir -p $(@D)
				@$(CC) -o $@ -c $< $(CFLAGS)
				@# echo $@
				@# echo $<
				@# ${CC} ${CFLAGS} -o $@ -c $<
$(LIBFT):
				printf "\033c"
				@echo "☝️ $(BLUE)First of: Make LIBFT$(NO_COLOR) 📖"
				@$(MAKE) -C./libft
clean:
				@rm -rf $(DIR_OBJ) res subject
				@${RM} ${OBJS_FILES} ./gnl/*.o
				@$(MAKE) clean -C./libft
				@$(MAKE) clean -C./MLX42

				@echo "\033[38;5;120msweep sweep: object files \033[0m"

fclean:			clean
				${RM} ${NAME} *.a
				$(MAKE) fclean -C ./libft
				$(MAKE) fclean -C ./MLX42
				@echo "\033[38;5;180mexecutable?! gone! \033[0m"

re:				fclean all
				@echo "\033[38;5;197mall done!\033[0m"
				@echo "\033[38;5;185mThank you for your time!\033[0m"
.PHONY: 		all fclean clean re
