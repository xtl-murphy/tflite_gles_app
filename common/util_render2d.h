/* ------------------------------------------------ *
 * The MIT License (MIT)
 * Copyright (c) 2019 terryky1220@gmail.com
 * ------------------------------------------------ */
 #ifndef _UTIL_RENDER_2D_H_
 #define _UTIL_RENDER_2D_H_

#include "util_texture.h"

int init_2d_renderer (int w, int h);

int draw_2d_fillrect (int x, int y, int w, int h, float *color);
int draw_2d_texture (int texid, int x, int y, int w, int h, int upsidedown);
int draw_2d_texture_ex (texture_2d_t *tex, int x, int y, int w, int h, int upsidedown);
int draw_2d_texture_texcoord (int texid, int x, int y, int w, int h, float *user_texcoord);
int draw_2d_texture_ex_texcoord (texture_2d_t *tex, int x, int y, int w, int h, float *user_texcoord);
int draw_2d_texture_ex_texcoord_rot (texture_2d_t *tex, int x, int y, int w, int h, float *user_texcoord, 
                                     float px, float py, float deg);
int draw_2d_texture_blendfunc (int texid, int x, int y, int w, int h,
                           int upsidedown, unsigned int *blendfunc);
int draw_2d_texture_modulate (int texid, int x, int y, int w, int h,
                           int upsidedown, float *color, unsigned int *blendfunc);
int draw_2d_colormap (int texid, int x, int y, int w, int h, float alpha, int upsidedown);

int draw_2d_rect (int x, int y, int w, int h, float *color, float line_width);
int draw_2d_line (int x0, int y0, int x1, int y1, float *color, float line_width);

 #endif /* _UTIL_RENDER_2D_H_ */
 