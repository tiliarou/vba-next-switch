#include "GBA.h"
#include "Globals.h"
#include "Flash.h"
#include "Sram.h"

#if 0
uint8_t sramRead(uint32_t address)
{
	return flashSaveMemory[address & 0xFFFF];
}
#endif

void sramDelayedWrite(uint32_t address, uint8_t byte)
{
	saveType = 1;
	cpuSaveGameFunc = sramWrite;
	sramWrite(address, byte);
}

void sramWrite(uint32_t address, uint8_t byte)
{
	flashSaveMemory[address & 0xFFFF] = byte;
	systemSaveUpdateCounter = SYSTEM_SAVE_UPDATED;
}
