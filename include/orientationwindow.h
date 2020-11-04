#include "pgmspace.h"

// memcpy_P(buf, ORIENTATIONWINDOW_IMAGE, 20480);

#define ORIENTATIONWINDOW_IMAGE_LEN 20480
#define ORIENTATIONWINDOW_IMAGE_W 160
#define ORIENTATIONWINDOW_IMAGE_H 128

extern const uint16_t ORIENTATIONWINDOW_IMAGE[20480] PROGMEM;

#define ORIENTATIONWINDOW_draw(x,y) TFT_drawPixmap(x, y, ORIENTATIONWINDOW_IMAGE_W, ORIENTATIONWINDOW_IMAGE_H,ORIENTATIONWINDOW_IMAGE)


