CC = gcc
CFLAGS = -Wall -g
LDFLAGS = -lSDL2

SRC = src/main.c src/render.c src/map.c src/player.c src/raycasting.c
OBJ = $(SRC:.c=.o)

all: raycaster

raycaster: $(OBJ)
    $(CC) $(OBJ) -o raycaster $(LDFLAGS)

clean:
    rm -f $(OBJ) raycaster
