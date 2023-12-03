#ar -r ->replace exising files or create a new one if. 
#ar -c -> silence the information message.
#ar -s -> adds or updates an onject-file index to the archive.

NAME := libftprintf.a

SRC := ft_printf.c

SUBDIR = libft

SUBOBJS = libft/libft.a

OBJS = ${SRC:.c=.o}

CC := cc

CFLAGS := -Wall -Wextra -Werror

RM := /bin/rm -f

AR := ar -rc

all:	${SUBDIR} $(NAME)

$(NAME):	$(OBJS)
	cp ${SUBOBJS} ./${NAME}
	${AR} ${NAME} ${OBJS} 

$(OBJS):
	$(CC) -c $(CFLAGS) ${SRC}

${SUBDIR}:
	cd ${SUBDIR} && ${MAKE}

test:	
	make 
	$(CC) ../main_ft_printf.c $(NAME)
	./a.out


clean:
	$(RM) $(OBJS)
	# cd ${SUBDIR} && ${MAKE} clean

fclean:	clean
	${RM} ${NAME}
	cd ${SUBDIR} && ${MAKE} fclean


re: fclean all

.PHONY:	all clean fclean re ${SUBDIR} test