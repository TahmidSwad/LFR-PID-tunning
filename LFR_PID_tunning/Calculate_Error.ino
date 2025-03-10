void calculateError()
{
  sum = 0;
  wSum = 0;
  for (int i = 0; i < 7; i++)
  {
    sum += s[i];
    wSum += s[i] * (i + 1) * 10;

  }
  if (sum != 0) {
    error = (wSum / sum) - 40;
  }
  else if(sum == 0){
    if(lastSen == 'r'){
      error = -40;
    }
    else{
      error = 40;
    }
  }
}
