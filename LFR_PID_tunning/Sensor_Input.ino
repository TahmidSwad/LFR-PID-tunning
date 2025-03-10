void sensorInput()
{
  for (int i = 0; i < 7; i++) {
    if (analogRead(sensorPin[i]) > 300)
    {
      s[i] = 1;
    }
    else 
    {
      s[i] = 0;
    }
  }

  if( s[0] == 1){
    lastSen = 'l';
  }
  else if(s[6] == 1){
    lastSen = 'r';
  }
}
