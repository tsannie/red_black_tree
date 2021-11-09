CC			= @clang++
CFLAGS		= -Wall -Wextra -Werror
RM			= @rm -rf

GREEN		:= $(shell tput -Txterm setaf 2)
LIGHTPURPLE	:= $(shell tput -Txterm setaf 4)
PURPLE		:= $(shell tput -Txterm setaf 5)
BOLD		:= $(shell tput -Txterm bold)
END			:= $(shell tput -Txterm sgr0)

SRC			= main.cpp

OBJ			= $(SRC:.cpp=.o)

%.o: %.cpp
			@printf "${PURPLE}${BOLD}Start compile ... %-30.30s\r${END}" $@
			$(CC) $(CFLAGS) -c $<

all: 	$(OBJ)
			@echo "\n"
			$(CC) $(CFLAGS) $(OBJ)
			@echo "${GREEN}Has been build !${END}"

clean:
			$(RM) $(OBJ)
			@echo "${LIGHTPURPLE}Cleaning ...${END}\n"

fclean:		clean
			$(RM) a.out
			@echo "${LIGHTPURPLE}Delete ...${END}\n"

re:			fclean all

.PHONY:		all test clean fclean re
