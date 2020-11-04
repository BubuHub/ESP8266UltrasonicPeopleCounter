#include "pgmspace.h"

// memcpy_P(buf, SETDOORWIDTH_IMAGE, 20480);

#define SETDOORWIDTH_IMAGE_LEN 20480
#define SETDOORWIDTH_IMAGE_W 160
#define SETDOORWIDTH_IMAGE_H 128

extern const uint16_t SETDOORWIDTH_IMAGE[20480] PROGMEM;

#define SETDOORWIDTH_draw(x,y) TFT_drawPixmap(x, y, SETDOORWIDTH_IMAGE_W, SETDOORWIDTH_IMAGE_H,SETDOORWIDTH_IMAGE)



