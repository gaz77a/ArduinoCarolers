#include "SystemTones.h"
#include "Foundation.h"

void PlayTurnOn()
{
  PlayTune(TurnOn, CountOf(TurnOn));
}

void PlayTurnOff()
{
  PlayTune(TurnOff, CountOf(TurnOff));
}

void PlayMaster()
{
  PlayTune(MasterTone, CountOf(MasterTone));
}
