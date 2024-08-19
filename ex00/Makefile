NAME = Polymorphe
CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR = .obj/

# ---------- Sources --------- #

SRC = \
	main.cpp \
	Animal.cpp \
	Dog.cpp \
	Cat.cpp

OBJ =	$(SRC:%.cpp=$(OBJ_DIR)%.o)

# ---------- Rules --------- #

all:
	$(MAKE) $(NAME)

$(OBJ_DIR)%.o: %.cpp | $(OBJ_DIR)
	$(CPP) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR)

fclean:
	$(MAKE) clean
	rm -rf $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean flcean re