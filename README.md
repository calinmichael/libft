Project Name - Libft

Libft is a custom C library that has a lot of commonly used functions from the C standard library.
It is part of the 42 School curriculum and is useful for practicing C programming.

Description - The goal for this project is to recreate multiple useful functions from the standard C
			  library from scratch.

Functions - Character functions:
				-	ft_isalpha
				-	ft_isdigit
				-	ft_isalnum
				-	ft_isascii
				-	ft_isprint
				-	ft_toupper
				-	ft_tolower

		  - String functions:
				-	ft_strlen
				-	ft_strchr
				-	ft_strrchr
				-	ft_strncmp
				-	ft_strnstr
				-	ft_strdup
				-	ft_substr
				-	ft_strjoin
				-	ft_strtrim
				-	ft_split
				-	ft_strmapi
				-	ft_striteri

		  - Memory functions:
				-	ft_memset
				-	ft_bzero
				-	ft_memcpy
				-	ft_memmove
				-	ft_memchr
				-	ft_memcmp
				-	ft_calloc

		  - Conversion functions:
				-	ft_atoi
				-	ft_itoa

		  - Linked List functions:
				-	ft_lstnew
				-	ft_lstadd_front
				-	ft_lstsize
				-	ft_lstlast
				-	ft_lstadd_back
				-	ft_lstdelone
				-	ft_lstclear
				-	ft_lstiter
				-	ft_lstmap

Compilation - The project includes a Makefile to compile libft. If you use the command make, it
			  creates libft.a. To remove object files, you could use make clean. To remove object
			  files and the library, you would use make fclean. Lastly to recompile everything, use 			  make re.

Usage - You must make sure to include the header file at the top of your C file: #include "libft.h".		Then you can compile by typing cc main.c libft.a; main.c being the C file you created.

Author - Calin Cascaval
		 42 School Vienna
