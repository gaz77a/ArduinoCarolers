#include "JingleBellsSong.h"
void PlayJingleBells(int partNumber)
{  
  switch (partNumber)
  {
    case 1: PlayTune(JingleBellsDeviceOne, CountOf(JingleBellsDeviceOne));
    break;

    case 2: PlayTune(JingleBellsDeviceTwo, CountOf(JingleBellsDeviceTwo));
    break;    
    
    case 3: PlayTune(JingleBellsDeviceThree, CountOf(JingleBellsDeviceThree));
    break;
    
    case 4: PlayTune(JingleBellsDeviceOne, CountOf(JingleBellsDeviceOne));
    break;
    
  }
  
}
