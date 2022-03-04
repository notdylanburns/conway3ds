#ifndef MAIN_H_GUARD
#define MAIN_H_GUARD

#include "grid.h"

#define TOP_SCREEN_WIDTH 400
#define TOP_SCREEN_HEIGHT 240
#define BOTTOM_SCREEN_WIDTH 320
#define BOTTOM_SCREEN_HEIGHT 240

extern void getTitle(Grid *grid);
extern void draw(Grid *grid, C3D_RenderTarget *screen, u32 bgColour, u32 fgColour);
extern void updateGrid(Grid *grid);
extern void drawMenu(C3D_RenderTarget *screen, char selection, u32 bgColour, u32 fgColour);
extern void beginFrame();
extern void endFrame();
extern void clrScreen(C3D_RenderTarget *screen, u32 colour);
extern void mainMenuInit();
extern void mainMenuDeInit();

#endif