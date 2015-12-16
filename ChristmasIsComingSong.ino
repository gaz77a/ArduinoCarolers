
#include "ChristmasIsComingSong.h"
#include "Foundation.h"

void PlayChristmasIsComing(int partNumber)
{  
  switch (partNumber)
  {
    case 1: PlayTune(ChristmasIsComingDeviceOne, CountOf(ChristmasIsComingDeviceOne));
    break;

    case 2: 
    PlayTune(ChristmasIsComingDeviceTwo, CountOf(ChristmasIsComingDeviceTwo));
    break;    
    
    case 3: PlayTune(ChristmasIsComingDeviceOne, CountOf(ChristmasIsComingDeviceOne));
    break;
    
    case 4: 
    PlayTune(ChristmasIsComingDeviceTwo, CountOf(ChristmasIsComingDeviceTwo));
    break;
 
  }
 
}


