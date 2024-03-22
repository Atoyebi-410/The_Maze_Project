#ifndef GLOBAL_H
#define GLOBAL_H

/* this is render window */
extern SDL_Window *window;

/* this is window renderer */
extern SDL_Renderer *renderer;

/* this is texture */
extern SDL_Texture *texture;

/* this is buffer for textures */
extern uint32_t buffer[SCREEN_HEIGHT][SCREEN_WIDTH];

/* this is array of textures */
extern uint32_t tiles[TEX_COUNT][TEX_HEIGHT][TEX_WIDTH];

/* this is X and Y start position */
extern point_t pos;

/* this is initial direction vector */
extern point_t dir;

/* this is camera plane */
extern point_t plane;

/* this is the time of current frame */
extern double time;

#endif /* GLOBAL_H */
