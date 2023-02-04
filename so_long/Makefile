CC			=	gcc
MINILIBX	=	others/minilibx/libmlx.a
LIBFT		=	others/libft/libft.a
PRINTF		=	others/ft_printf/libftprintf.a
MINILIB		=	others/minilibx
F_PRINT		=	others/ft_printf
F_LIBFT		=	others/libft
LFLAGS		=	-L $(F_LIBFT) -l ft -L $(F_PRINT) -l ftprintf -L $(MINILIB) -l mlx -framework OpenGL -framework AppKit -Dunix
CFLAGS		=	-I./include -I./libft -I./printf -I./minilibx
NAME		=	so_long
SRC_DIR		=	src
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I.
RM			=	rm -f
AR			=	ar rcs
#Definition

# -I : Kütüphanenin path ini gösterir.
# -L : Directory
# -l : static library kütüphanenin yerini gösteriyor (local)

#Directory
SRCS		:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJ			= $(SRCS:.c=.o)

all: $(NAME) others
			@gcc $(CFLAGS) $(LFLAGS) $(SRCS) $(LIBFT) $(PRINTF) -o $(NAME)
			@echo "Build ok"

# %.o:%.c
# 			@echo Compiling:
# 			@$(CC) $(CFLAGS) -c $< -o $@
# 			@echo Compiling Success file is : $< $(SRC_FILES) $@
# '-c $<' demek %.c deki bulduğu -c dosyasını '-o $@' ile objective dosyasına dönüştürüyor.

others: print libft

$(NAME): $(MINILIB)
			make -C $(MINILIB)
			@echo "\nMLX Done!!!"

print:
			make -C $(F_PRINT)
			@echo "\n Printf Done"

libft:
			make -C $(F_LIBFT)
			@echo "\n Libft Done"

clean:
			@$(RM) -rf $(OBJ)
			make -C $(MINILIB) clean
			make -C $(F_LIBFT) clean
			make -C $(F_PRINT) clean
			@echo SoLong objects files cleaned!

fclean:	clean
			@$(RM) -f $(NAME)
			make -C $(F_LIBFT) fclean
			make -C $(F_PRINT) fclean
			@echo SoLong executable files cleaned!

re:			fclean all
			@echo Cleaned and rebuilt

.PHONY:		all clean fclean re bonus



# (MLX) in klasörüne gidip clean komutunu çalıştırıyor.

# (MLX) in fclean komutu yok o yüzden sadece clean yaptım.
