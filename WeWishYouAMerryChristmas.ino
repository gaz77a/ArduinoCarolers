#include "WeWishYouAMerryChristmasSong.h"
#include "Foundation.h"

void PlayWeWishYouAMerryChristmas(int partNumber)
{  
  switch (partNumber)
  {
    case 1: PlayTune(MerryChristmasDeviceOne, CountOf(MerryChristmasDeviceOne));
    break;

    case 2: PlayTune(MerryChristmasDeviceTwo, CountOf(MerryChristmasDeviceTwo));
    break;    
    
    case 3: PlayTune(MerryChristmasDeviceThree, CountOf(MerryChristmasDeviceThree));
    break;
    
    case 4: PlayTune(MerryChristmasDeviceFour, CountOf(MerryChristmasDeviceFour));
    break;
    
  }
  
}
