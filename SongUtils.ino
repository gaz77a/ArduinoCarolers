#include "Foundation.h"
#include "SongUtils.h"


unsigned long CalcDurationMs( byte duration, byte tempo )
{
  unsigned long result =  duration * (tempo/Te);

  return result;
}

void PlaySong(enum Song songNo, int partNo)
{
  switch(songNo)
  {
    case JingleBells:
      PlayJingleBells(partNo);
      break;
      
    case MerryChristmas:
      PlayWeWishYouAMerryChristmas(partNo);
      break;

    case ChristmasIsComing:
      PlayWeWishYouAMerryChristmas(partNo);
      break;
  }
}

void PlayTune(const NoteType *tune, size_t numNotes)
{
  unsigned long durationMs;
  for (int i=0; i<numNotes; i++)
  {
    durationMs = CalcDurationMs( tune[i].Duration, Tempo);
    tone(piezo, tune[i].Note, durationMs);
    delay(durationMs * 1.05);
  }
}
