NAME = cache

SRCS = ${shell find "." -name "*.cpp"}

OBJS = ${SRCS:.cpp=.o}

CXX = c++

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
		${CXX} ${FLAGS} ${SRCS} -o ${NAME}

clean:
		rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME}

re: fclean all

.PHONY: all re clean fclean