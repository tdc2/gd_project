#ifndef GD_PROJECT_RENDER_H
#define GD_PROJECT_RENDER_H


#include <vector>
#include <clocale>
#include "Bitmap.h"
#include "Map.h"

void bresenham(bool ** temp_plain, GeomVector point_1, GeomVector point_2, bool edge_path, Bitmap * bmp = NULL);
void render_map(Map the_map, Bitmap * bmp);
void render_path(std::vector<GeomVector> path, Bitmap * bmp, bool edge_path);


#endif //GD_PROJECT_RENDER_H
