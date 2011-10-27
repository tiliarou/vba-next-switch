#ifndef USE_GB_ONLY
#ifndef RTC_H
#define RTC_H

u16 rtcRead(u32 address);
bool rtcWrite(u32 address, u16 value);
void rtcEnable(bool);
bool rtcIsEnabled();
void rtcReset();

void rtcReadGame(gzFile gzFile);
void rtcSaveGame(gzFile gzFile);

#ifdef __LIBSNES__
void rtcReadGameMem(const uint8_t *& data);
void rtcSaveGameMem(uint8_t *& data);
#endif

#endif // RTC_H
#endif
