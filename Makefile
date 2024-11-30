
CC=gcc
LIBS = -lraylib
SRC = src
all: src/main.c src/draw.c src/note.c src/component.c src/scale.c src/app.c
	$(CC) $(SRC)/*.c -o note $(LIBS)