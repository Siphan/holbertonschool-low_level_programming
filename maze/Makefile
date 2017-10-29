#SOURCES specifies which files to compile
SOURCES = src/main.c

#CC specifies which compiler we're using
CC = gcc

#COMPILER_FLAGS specifies the additional compilation options we're using
# -W suppresses all warnings
COMPILER_FLAGS = -Wall -Werror -Wextra -pedantic

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2

#OBJ_NAME specifies the name of our exectuable
OBJ = maze

#This is the target that compiles our executable
all : $(SOURCES)
	$(CC) $(SOURCES) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ)

#Run make clean to remove object files before running make again
clean:
	rm $(OBJ)
