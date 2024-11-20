# LIBFT

![Libft](https://img.shields.io/badge/Libft-42Malaga-blue)

## 📚 Descripción

**LIBFT** es un proyecto de la escuela 42 que consiste en la creación de una biblioteca de funciones en C. Esta biblioteca contiene una serie de funciones estándar de la biblioteca de C, así como algunas funciones adicionales útiles para la manipulación de cadenas, memoria y listas enlazadas. El objetivo del proyecto es profundizar en el conocimiento del lenguaje C y aprender a implementar funciones básicas desde cero.

## 📂 Contenido

La biblioteca LIBFT incluye las siguientes categorías de funciones:

### 🔤 Funciones de Manipulación de Caracteres

- [`ft_isalpha`](libft_commented/ft_isalpha.c) - Verifica si un carácter es una letra del alfabeto.
- [`ft_isdigit`](libft_commented/ft_isdigit.c) - Verifica si un carácter es un dígito decimal.
- [`ft_isalnum`](libft_commented/ft_isalnum.c) - Verifica si un carácter es una letra o un dígito.
- [`ft_isascii`](libft_commented/ft_isascii.c) - Verifica si un carácter pertenece al conjunto ASCII.
- [`ft_isprint`](libft_commented/ft_isprint.c) - Verifica si un carácter es imprimible.
- [`ft_toupper`](libft_commented/ft_toupper.c) - Convierte un carácter a mayúscula.
- [`ft_tolower`](libft_commented/ft_tolower.c) - Convierte un carácter a minúscula.

### 🔠 Funciones de Manipulación de Cadenas

- [`ft_strlen`](libft_commented/ft_strlen.c) - Calcula la longitud de una cadena.
- [`ft_strchr`](libft_commented/ft_strchr.c) - Encuentra la primera aparición de un carácter en una cadena.
- [`ft_strrchr`](libft_commented/ft_strrchr.c) - Encuentra la última aparición de un carácter en una cadena.
- [`ft_strncmp`](libft_commented/ft_strncmp.c) - Compara dos cadenas hasta un número especificado de caracteres.
- [`ft_strnstr`](libft_commented/ft_strnstr.c) - Encuentra una subcadena en una cadena.
- [`ft_strdup`](libft_commented/ft_strdup.c) - Duplica una cadena.
- [`ft_strlcpy`](libft_commented/ft_strlcpy.c) - Copia una cadena a un buffer de destino.
- [`ft_strlcat`](libft_commented/ft_strlcat.c) - Concatena dos cadenas en un buffer de destino.
- [`ft_substr`](libft_commented/ft_substr.c) - Extrae una subcadena de una cadena.
- [`ft_strjoin`](libft_commented/ft_strjoin.c) - Concatena dos cadenas en una nueva cadena.
- [`ft_strtrim`](libft_commented/ft_strtrim.c) - Elimina caracteres específicos de ambos extremos de una cadena.
- [`ft_split`](libft_commented/ft_split.c) - Divide una cadena en subcadenas utilizando un delimitador.
- [`ft_strmapi`](libft_commented/ft_strmapi.c) - Aplica una función a cada carácter de una cadena.
- [`ft_striteri`](libft_commented/ft_striteri.c) - Aplica una función a cada carácter de una cadena, pasando el índice del carácter.
- [`ft_itoa`](libft_commented/ft_itoa.c) - Convierte un número entero a una cadena.
- [`ft_atoi`](libft_commented/ft_atoi.c) - Convierte una cadena a un número entero.

### 🧠 Funciones de Manipulación de Memoria

- [`ft_memset`](libft_commented/ft_memset.c) - Llena un bloque de memoria con un valor específico.
- [`ft_memcpy`](libft_commented/ft_memcpy.c) - Copia un bloque de memoria.
- [`ft_memmove`](libft_commented/ft_memmove.c) - Copia un bloque de memoria, manejando superposición.
- [`ft_memchr`](libft_commented/ft_memchr.c) - Busca un carácter en un bloque de memoria.
- [`ft_memcmp`](libft_commented/ft_memcmp.c) - Compara dos bloques de memoria.
- [`ft_calloc`](libft_commented/ft_calloc.c) - Asigna memoria para un array y establece todos los bytes a cero.
- [`ft_bzero`](libft_commented/ft_bzero.c) - Establece todos los bytes de un bloque de memoria a cero.

### 📤 Funciones de Entrada/Salida

- [`ft_putchar_fd`](libft_commented/ft_putchar_fd.c) - Escribe un carácter en un descriptor de archivo.
- [`ft_putstr_fd`](libft_commented/ft_putstr_fd.c) - Escribe una cadena en un descriptor de archivo.
- [`ft_putendl_fd`](libft_commented/ft_putendl_fd.c) - Escribe una cadena seguida de un salto de línea en un descriptor de archivo.
- [`ft_putnbr_fd`](libft_commented/ft_putnbr_fd.c) - Escribe un número entero en un descriptor de archivo.

### 🔗 Funciones de Listas Enlazadas (Bonus)

- [`ft_lstnew`](libft_commented/ft_lstnew_bonus.c) - Crea un nuevo nodo para una lista enlazada.
- [`ft_lstadd_front`](libft_commented/ft_lstadd_front_bonus.c) - Añade un nuevo nodo al principio de una lista enlazada.
- [`ft_lstsize`](libft_commented/ft_lstsize_bonus.c) - Cuenta el número de nodos en una lista enlazada.
- [`ft_lstlast`](libft_commented/ft_lstlast_bonus.c) - Devuelve el último nodo de una lista enlazada.
- [`ft_lstadd_back`](libft_commented/ft_lstadd_back_bonus.c) - Añade un nuevo nodo al final de una lista enlazada.
- [`ft_lstdelone`](libft_commented/ft_lstdelone_bonus.c) - Elimina y libera un nodo de una lista enlazada.
- [`ft_lstclear`](libft_commented/ft_lstclear_bonus.c) - Elimina y libera todos los nodos de una lista enlazada.
- [`ft_lstiter`](libft_commented/ft_lstiter_bonus.c) - Aplica una función a cada contenido de los nodos de una lista enlazada.
- [`ft_lstmap`](libft_commented/ft_lstmap_bonus.c) - Aplica una función a cada contenido de los nodos de una lista enlazada, creando una nueva lista con los resultados.

## 🛠️ Instalación

Para compilar la biblioteca, simplemente clona este repositorio y ejecuta `make`:

```bash
git clone https://github.com/tu_usuario/LIBFT_42MALAGA.git
cd LIBFT_42MALAGA
make
```

## 🚀 Uso

Incluye el archivo de cabecera [`libft.h`](libft_commented/libft.h) en tu proyecto y enlaza la biblioteca `libft.a` durante la compilación:

## 🤝 Contribuciones

Las contribuciones son bienvenidas. Si encuentras algún error o tienes alguna mejora, por favor abre un issue o envía un pull request.

## 📄 Licencia

Este proyecto está licenciado bajo la Licencia MIT. Consulta el archivo [`LICENSE`](LICENSE) para más detalles.

## 📧 Contacto

Para cualquier consulta, puedes contactarme en [eliaspm05@gmail.com](mailto:eliaspm05@gmail.com).

---

¡Gracias por visitar mi proyecto LIBFT!
