#include "player.h"

Player player = { .x = 1.5, .y = 1.5, .dirX = 1.0, .dirY = 0.0 };

void movePlayer(float deltaX, float deltaY) {
    player.x += deltaX;
    player.y += deltaY;
}

Player* getPlayer() {
    return &player;
}
