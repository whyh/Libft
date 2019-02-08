cmake_minimum_required(VERSION 3.13)

project(libft)

set(CMAKE_C_STANDARD 99)

AUX_SOURCE_DIRECTORY(libft LIBFT)

add_executable(
        ft_printf ${LIBFT}
        main.c)
