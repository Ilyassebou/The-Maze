#include "render.h"
#include "map.h"
#include "player.h"
#include <SDL2/SDL.h>

// Define the wall color
void renderWorld(SDL_Renderer *renderer) {
    // Set color for walls
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    // Basic example of drawing walls based on the map
    int mapWidth = getMapWidth();
    int mapHeight = getMapHeight();

    for (int x = 0; x < mapWidth; x++) {
        for (int y = 0; y < mapHeight; y++) {
            if (getTile(x, y) == 1) {
                SDL_Rect wall = {x * 64, y * 64, 64, 64};
                SDL_RenderFillRect(renderer, &wall);
            }
        }
    }
}

