#include <gtk/gtk.h>
#include "bitlib.h"

const double WIDTH = 800;
const double HEIGHT = 800;
char *OUT_NAME = "out.png";

void render(cairo_t *cr) {
  cairo_clear_rgb(cr, 1, 1, 1);
  cairo_fill_rectangle(cr, 100, 100, 600, 600);
}

int main(int argc, char **argv) {
  bl_render_image(WIDTH, HEIGHT, OUT_NAME, render);
  bl_view_image(OUT_NAME);
  return 0;
}

