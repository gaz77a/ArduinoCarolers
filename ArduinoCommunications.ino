
int *DecodeIRMessage(int msg)
{
  int result[3];
  if (msg < 500)
  {
    result[0] = msg; 
    //Valid msg from Other Arduino Received
    int temp;
    result[0] = msg / 100;
    temp = msg % 100;
    result[2] = temp / 10;
    temp = temp % 10;
    result[3] = temp;
  }
  
  return result;
}

void SendIRMessage(int deviceID, int songNo, int partNo)
{
  int msg = deviceID*100  + songNo*10 + partNo;
  IRsend irsend;
  irsend.sendSony (msg, 12);
  //Serial.println("Sent");
}


void IsMsgFromRemote(int msg)
{
  
}

void InformWhatToPlay2(int devID1, int devID2, int SongNo)
{
  SendIRMessage(devID1, SongNo, 2);
  SendIRMessage(devID2, SongNo, 3);
}

void InformWhatToPlay3(int devID1, int devID2, int devID3, int SongNo)
{
  SendIRMessage(devID1, SongNo, 1);
  SendIRMessage(devID2, SongNo, 2);
  SendIRMessage(devID3, SongNo, 3);
}

