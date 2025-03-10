void motor(int lmspeed, int rmspeed)
{
  if(lmspeed > 250)
  {
    rmspeed = rmspeed - (lmspeed-250);
  }
  if(rmspeed > 250)
  {
    lmspeed = lmspeed - (rmspeed-250);
  }

  if(lmspeed>0)
  {
    digitalWrite(lmf, HIGH);
    digitalWrite(lmb, LOW);
  }
  else if(lmspeed<0)
  {
    digitalWrite(lmf, LOW);
    digitalWrite(lmb, HIGH);
  }
  else
  {
    digitalWrite(lmf, HIGH);
    digitalWrite(lmb, HIGH);
  }

  if(rmspeed > 0)
  {
    digitalWrite(rmf, HIGH);
    digitalWrite(rmb, LOW);
  }
  else if(rmspeed<0)
  {
    digitalWrite(rmf, LOW);
    digitalWrite(rmb, HIGH);
  }
  else
  {
    digitalWrite(rmf, HIGH);
    digitalWrite(rmb, HIGH);
  }   
  
  lmspeed = abs(lmspeed);
  rmspeed = abs(rmspeed);

  if(lmspeed > 250)
  {
    lmspeed = 250;
  }
  if(rmspeed > 250)
  {
    rmspeed = 250;
  }
  
     
  analogWrite(lms, lmspeed);
  analogWrite(rms, rmspeed);
}
