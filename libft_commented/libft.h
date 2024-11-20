/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:15:12 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/02 14:28:32 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdint.h> // Librería para definir tipos de datos enteros con tamaño específico, como SIZE_MAX
# include <limits.h> // Librería de límites de tipos de datos enteros y de tamaño
# include <stddef.h> // Librería de tipos de tamaño "size_t"
# include <stdlib.h> // Librería de funciones de gestión de memoria y conversión
# include <unistd.h> // Librería de funciones del sistema, como write

// Funciones de manipulación de caracteres
int		ft_toupper(int c); // Convierte un carácter a mayúscula
int		ft_tolower(int c); // Convierte un carácter a minúscula


// Funciones de manipulación de cadenas
char	*ft_strrchr(const char *s, int c); // Encuentra la última aparición de un carácter en una cadena
char	*ft_strnstr(const char *haystack, const char *needle, size_t len); // Encuentra una subcadena en una cadena
int		ft_strncmp(const char *s1, const char *s2, size_t n); // Compara dos cadenas hasta un número especificado de caracteres
size_t	ft_strlen(const char *s); // Calcula la longitud de una cadena
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); // Copia una cadena a un buffer de destino
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // Concatena dos cadenas en un buffer de destino
char	*ft_strdup(const char *s1); // Duplica una cadena
char	*ft_strchr(const char *s, int c); // Encuentra la primera aparición de un carácter en una cadena


// Funciones de manipulación de memoria
void	*ft_memset(void *b, int c, size_t len); // Llena un bloque de memoria con un valor específico
void	*ft_memmove(void *dst, const void *src, size_t len); // Copia un bloque de memoria, manejando superposición
void	*ft_memcpy(void *dst, const void *src, size_t n); // Copia un bloque de memoria
int		ft_memcmp(const void *s1, const void *s2, size_t n); // Compara dos bloques de memoria
void	*ft_memchr(const void *s, int c, size_t n); // Busca un carácter en un bloque de memoria


// Funciones de verificación de caracteres
int		ft_isprint(int c); // Verifica si un carácter es imprimible
int		ft_isdigit(int c); // Verifica si un carácter es un dígito decimal
int		ft_isascii(int c); // Verifica si un carácter pertenece al conjunto ASCII
int		ft_isalpha(int c); // Verifica si un carácter es una letra del alfabeto
int		ft_isalnum(int c); // Verifica si un carácter es una letra o un dígito


// Funciones de gestión de memoria
void	*ft_calloc(size_t nmemb, size_t size); // Asigna memoria para un array y establece todos los bytes a cero
void	ft_bzero(void *s, size_t n); // Establece todos los bytes de un bloque de memoria a cero


// Funciones de manipulación de cadenas avanzadas
int		ft_atoi(const char *str); // Convierte una cadena a un número entero
char	*ft_substr(char const *s, unsigned int start, size_t len); // Extrae una subcadena de una cadena
char	*ft_strjoin(char const *s1, char const *s2); // Concatena dos cadenas en una nueva cadena
char	*ft_strtrim(char const *s1, char const *set); // Elimina caracteres específicos de ambos extremos de una cadena
char	**ft_split(char const *s, char c); // Divide una cadena en subcadenas utilizando un delimitador
char	*ft_itoa(int n); // Convierte un número entero a una cadena
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); // Aplica una función a cada carácter de una cadena
void	ft_striteri(char *s, void (*f)(unsigned int, char *)); // Aplica una función a cada carácter de una cadena, modificando la cadena


// Funciones de escritura en archivos
void	ft_putchar_fd(char c, int fd); // Escribe un carácter en un descriptor de archivo
void	ft_putstr_fd(char *s, int fd); // Escribe una cadena en un descriptor de archivo
void	ft_putendl_fd(char *s, int fd); // Escribe una cadena seguida de un salto de línea en un descriptor de archivo
void	ft_putnbr_fd(int n, int fd); // Escribe un número entero en un descriptor de archivo


/*
-------------------------------LISTAS ENLAZADAS-------------------------------------
*/

// Definición de la estructura de un nodo de lista enlazada
typedef struct s_list
{
    void			*content; // Contenido del nodo
    struct s_list	*next; // Puntero al siguiente nodo
}	t_list;

// Funciones de manipulación de listas enlazadas
t_list	*ft_lstnew(void *content); // Crea un nuevo nodo
void	ft_lstadd_front(t_list **lst, t_list *new); // Añade un nodo al principio de la lista
int		ft_lstsize(t_list *lst); // Cuenta el número de nodos en la lista
t_list	*ft_lstlast(t_list *lst); // Devuelve el último nodo de la lista
void	ft_lstadd_back(t_list **lst, t_list *new); // Añade un nodo al final de la lista
void	ft_lstdelone(t_list *lst, void (*del)(void *)); // Elimina y libera un nodo de la lista
void	ft_lstclear(t_list **lst, void (*del)(void *)); // Elimina y libera todos los nodos de la lista
void	ft_lstiter(t_list *lst, void (*f)(void *)); // Aplica una función a cada contenido de los nodos de la lista
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); // Aplica una función a cada contenido de los nodos, creando una nueva lista

#endif
