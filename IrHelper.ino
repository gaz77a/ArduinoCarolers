
void ProcessIrReceived(int msg)
{
  switch (msg)
  {
    // Sony 1
    case 0x010: 
    {
      PlayJingleBells(curDeviceNumber);
      break;
    }
    
    // Sony 2
    case 0x810: 
    {
      PlayWeWishYouAMerryChristmas(curDeviceNumber);
      break;
    }

    // Sony 3
    case 0x410: 
    {
      PlayChristmasIsComing(curDeviceNumber);
      break;
    }
    
    // POWER ON
    case 0xA90: 
    {
      PlayTurnOn();
      break;
    }
    
    // STOP
    case 0xCE9: 
    {
      PlayTurnOff();
      break;
    }
    
    // Sony 9 - Temp 
    case 0x110: 
    {
      PlayMaster();
      break;
    }
    
  }
}

