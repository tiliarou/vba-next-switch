#ifndef USE_GB_ONLY
#ifdef USE_GBA_FILTERS
#include "../System.h"

void gbafilter_pal(u16 * buf, int count);
void gbafilter_pal32(u32 * buf, int count);
void gbafilter_pad(u8 * buf, int count);
#endif
#endif
