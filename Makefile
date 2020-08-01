Cxx=g++
CFLAGS=-g -Wall -c
LDFLAGS=-g
SRC = ${wildcard src/*.cpp}
HDR = ${wildcard include/*.h}
OBJ = ${SRC:.cpp=.o}
EXEC = E


all: ${SRC} ${OBJ} ${EXEC}

%.o: %.c ${HDR}
	${Cxx} ${CFLAGS} $< -o $@

${EXEC}: ${OBJ}
	${Cxx} ${LDFLAGS} $^ -o ${EXEC}

clean:
	rm  src/*.o ${EXEC}