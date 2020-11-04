#include "pgmspace.h"

// memcpy_P(buf, SOUNDWINDOW_IMAGE, 20480);

#define SOUNDWINDOW_IMAGE_LEN 20480
#define SOUNDWINDOW_IMAGE_W 160
#define SOUNDWINDOW_IMAGE_H 128

extern const uint16_t SOUNDWINDOW_IMAGE[20480] PROGMEM;

#define SOUNDWINDOW_draw(x,y) TFT_drawPixmap(x, y, SOUNDWINDOW_IMAGE_W, SOUNDWINDOW_IMAGE_H,SOUNDWINDOW_IMAGE)



