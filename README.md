# libft
### My first C library

Reimplemented libc with just 3 basic functions
```c
ssize_t  write(int fd, const void *buf, size_t count);
void     *malloc(size_t size);
void     free(void *ptr);
```

## Included standard C library functions
`memset` `bzero` `memcpy` `memccpy` `memmove` `memchr` `memcmp` `strlen` `strdup` `strcpy` `strncpy` `strcat` `strncat` `strlcat` `strchr` `strrchr` `strstr` `strnstr` `strcmp` `strncmp` `atoi` `isalpha` `isdigit` `isalnum` `isascii` `isprint` `toupper` `tolower`

## Other functions, I found to be useful and worth including in my library
```c
void    *ft_memalloc(size_t size);
```
Allocates and returns a memory area of `size` . The memory allocated is initialized to `0`
```c
void    ft_memdel(void **ap);
```
Takes as a parameter address of a memory area `ap` that needs to be freed, then puts the pointer to `NULL`
```c
char    *ft_strnew(size_t size);
```
Allocates and returns a string of given `size` , each character of the string is initialized at `\0`
```c
void    ft_strdel(char **as);
```
Takes as a parameter address of string `as` that need to be freed, then sets its pointer to `NULL`
```c
void    ft_strclr(char *s);
```
Sets every character of string `s` to `\0`
```c
void    ft_striter(char *s, void (*f)(char *));
```
Applies the function `f` to each character of string `s`
```c
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
```
Applies function `f` to each character of string `s` , and passing its index as first argument
```c
char    *ft_strmap(char const *s, char (*f)(char));
```
Applies function `f` to each character of string `s` to create new string resulting from applications of `f`
```c
char    *ft_strmapi(char const *s, char(*f)(unsigned int, char));
```
Applies function `f` to each character of string `s` by giving its index as first argument to create new string resulting from applications of `f`
```c
int     ft_strequ(char const *s1, char const *s2);
```
Lexicographical comparison of `s1` and `s2` . If strings are identical function returns `1` , `0` otherwise
```c
int     ft_strnequ(char const *s1, char const *s2,size_t n);
```
Lexicographical comparison of `s1` and `s2` up to `n` characters or until a `\0` is reached. If strings are identical, function returns `1` , `0` otherwise
```c
char    *ft_strsub(char const *s, unsigned int start, size_t len);
```
Allocates and returns substring from string `s` . The substring begins at index `start` and is of size `len`
```c
char    *ft_strjoin(char const *s1, char const*s2);
```
Allocates and returns string, result of the concatenation of `s1` and `s2`
```c
char    *ft_strtrim(char const *s);
```
Allocates and returns a copy of string `s` without following characters `space` `\n` `\t` at the beginning and at the end of the string
```c
char    **ft_strsplit(char const *s, char c);
```
Allocates and returns array of string `s` obtained by spliting `s` using character `c` as a delimiter
```c
char    *ft_itoa(int n);
```
Allocate and returns string representing integer `n`
```c
void    ft_putchar(char c);
```
Outputs character `c` to the standard output
```c
void    ft_putstr(char const *s);
```
Outputs string `s` to the standard output
```c
void    ft_putendl(char const *s);
```
Outputs string `s` to the standard output followed by `\n`
```c
void    ft_putnbr(int n);
```
Outputs integer `n` to the standard output
```c
void    ft_putchar_fd(char c, int fd);
```
Outputs char `c` to the file descriptor `fd`
```c
void    ft_putstr_fd(char const *s, int fd);
```
Outputs string `s` to the file descriptor `fd`
```c
void    ft_putendl_fd(char const *s, int fd);
```
Outputs string `s` to the file descriptor `fd` followed by `\n`
```c
void    ft_putnbr_fd(int n, int fd);
```
Outputs integer `n` to the file descriptor `fd`
```c
t_list  *ft_lstnew(void const *content, size_t content_size);
```
Allocates and returns pointer to an ellement of list with given `content` and `content_size`
```c
void    ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
```
Deletes an ellement of list `alst` using `del` function, set pointer to `NULL`
```c
void    ft_lstdel(t_list **alst, void (*del)(void*,size_t));
```
Deletes all ellements of list `alst` using `del` function, sets pointers to `NULL`
```c
void    ft_lstadd(t_list **alst, t_list *new);
```
Adds element `new` at the beginning of list `alst`
```c
void    ft_lstiter(t_list *lst, void (*f)(t_list*));
```
Iterates list `lst` and applies function `f` to each link
```c
t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list*));
```
Iterates list `lst` and applies function `f` to each link to create a list resulting from applications of `f`

## Some extra functions
```c
long long  ft_atoibase(char *set, char *str);
```
Converts string `str` to signed integer, `set` specifies base
```c
unsigned long long  ft_atouibase(char *set, char *str);
```
Converts string `str` to unsigned integer, `set` specifies base
```c
char    *ft_itoabase(char *set, long long nbr);
```
Converts `nbr` to string, `set` specifies base
```c
char    *ft_uitoabase(char *set, unsigned long long nbr);
```
Converts `nbr` to string, `set` specifies base
```c
int     ft_strin(const char *str, char c);
```
Searches for character `c` in string `str` . If `c` is found returns `1` , and `0` otherwise
