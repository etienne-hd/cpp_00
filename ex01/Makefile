CXX=c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
NAME = phonebook
SRCS = main.cpp \
	PhoneBook.cpp \
	Contact.cpp \
	Utils.cpp \
	Cmd.cpp

OBJ_DIR = objs/
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p objs/
	$(CXX) $(CXXFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all fclean clean re
