/*
** get_pixel_color.c for pixel_color in /home/leandre/Rushs/scroller
** 
** Made by Léandre Blanchard
** Login   <leandre.blanchard@epitech.eu>
** 
** Started on  Sun Apr  2 17:16:19 2017 Léandre Blanchard
** Last update Sat Jun  3 16:42:32 2017 Léandre Blanchard
*/

#include "csfml.h"

/*
** This fonction return a sfColor filled with RGBA of the pixel
** in (x, y) of window_t->pixels
*/
sfColor		get_pixel_color(int x, int y, window_t *window)
{
  sfColor	color;
  sfUint8	r;
  sfUint8	b;
  sfUint8	g;
  sfUint8	a;

  r = window->pixels[(window->width * y + x) * 4 + 0];
  g = window->pixels[(window->width * y + x) * 4 + 1];
  b = window->pixels[(window->width * y + x) * 4 + 2];
  a = window->pixels[(window->width * y + x) * 4 + 3];
  color = sfColor_fromRGBA(r, g, b, a);
  return (color);
}
