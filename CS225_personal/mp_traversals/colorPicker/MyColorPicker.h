#pragma once

#include "ColorPicker.h"
#include "../cs225/HSLAPixel.h"
#include "../Point.h"

using namespace cs225;

/**
 * A color picker class using your own color picking algorithm
 */
class MyColorPicker : public ColorPicker
{
public:
  MyColorPicker(HSLAPixel mainColor, HSLAPixel secondColor, unsigned spacing);
  HSLAPixel getColor(unsigned x, unsigned y);

private:
  HSLAPixel mainColor;
  HSLAPixel secondColor;
  unsigned int spacing;
};
