#include <gtk/gtk.h>
#include "bitlib.h"

const double WIDTH = 400;
const double HEIGHT = 400;
const int FRAMES = 30;
const int FPS = 30;
char *OUT_NAME = "out.gif";

void render(cairo_t *cr, double percent) {
  cairo_clear_rgb(cr, 1, 1, 1);
  cairo_fill_rectangle(cr, g_random_double_range(0, WIDTH), g_random_double_range(0, HEIGHT), 20, 20);
}

int main(int argc, char **argv) {
  bl_render_anim(WIDTH, HEIGHT, FRAMES, FPS, OUT_NAME, render);
  bl_view_image(OUT_NAME);
  return 0;
}

