#include <gtk/gtk.h>
#include "bitlib.h"

const double width = 800;
const double height = 800;

int main(int argc, char **argv) {
  cairo_surface_t *surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, width, height);
  cairo_t *cr = cairo_create(surface);
  
  cairo_clear_rgb(cr, 1, 1, 1);


  cairo_surface_write_to_png(surface, "out.png");
  return 0;
}

