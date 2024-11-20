# Nombre del archivo de la biblioteca
NAME = libft.a

# Compilador y opciones de compilación
CC = cc
CFLAGS = -g -Wall -Wextra -Werror

# Archivos fuente para las funciones normales
SRC = ft_atoi.c \
    ft_bzero.c \
    ft_calloc.c \
    ft_isalnum.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_memchr.c \
    ft_memcmp.c \
    ft_memcpy.c \
    ft_memmove.c \
    ft_memset.c \
    ft_strchr.c \
    ft_strdup.c \
    ft_strlcat.c \
    ft_strlcpy.c \
    ft_strlen.c \
    ft_strncmp.c \
    ft_strnstr.c \
    ft_strrchr.c \
    ft_tolower.c \
    ft_toupper.c \
    ft_substr.c \
    ft_strjoin.c \
    ft_strtrim.c \
    ft_split.c \
    ft_itoa.c \
    ft_strmapi.c \
    ft_striteri.c \
    ft_putchar_fd.c \
    ft_putstr_fd.c \
    ft_putendl_fd.c \
    ft_putnbr_fd.c

# Archivos fuente para las funciones bonus
BONUS_SRC = ft_lstnew_bonus.c \
    ft_lstadd_front_bonus.c \
    ft_lstsize_bonus.c \
    ft_lstlast_bonus.c \
    ft_lstadd_back_bonus.c \
    ft_lstdelone_bonus.c \
    ft_lstclear_bonus.c \
    ft_lstiter_bonus.c \
    ft_lstmap_bonus.c

# Archivos objeto para las funciones normales
OBJ = $(SRC:.c=.o)

# Archivos objeto para las funciones bonus
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# Regla para compilar la biblioteca
$(NAME): $(OBJ)
    ar rcs $(NAME) $(OBJ)

# Regla para compilar las funciones bonus y añadirlas a la biblioteca
bonus: $(BONUS_OBJ)
    ar rcs $(NAME) $(BONUS_OBJ)

# Regla para compilar todo
all: $(NAME)

# Regla para limpiar los archivos objeto de las funciones normales
clean:
    rm -f $(OBJ)

# Regla para limpiar los archivos objeto de las funciones bonus
clean_bonus:
    rm -f $(BONUS_OBJ)

# Regla para limpiar todos los archivos objeto y la biblioteca
fclean: clean clean_bonus
    rm -f $(NAME)

# Regla para recompilar todo desde cero
re: fclean all

# Indica que las reglas no son archivos
.PHONY: all clean clean_bonus fclean re bonus
