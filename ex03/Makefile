NAME = Materia
CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 -g
OBJ_DIR = .obj/

# ---------- Sources --------- #

SRC = \
	main.cpp \
	AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	MateriaSource.cpp


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