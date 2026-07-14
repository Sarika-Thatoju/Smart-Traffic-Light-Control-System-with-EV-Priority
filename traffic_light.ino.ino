int red = 2;
int yellow = 3;
int green = 4;

int button = 7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(button, INPUT_PULLUP);
}

void loop()
{

  // EV Detected
  if(digitalRead(button)==LOW)
  {
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(green,HIGH);

    delay(5000);

    digitalWrite(green,LOW);

    return;
  }

  // Normal Signal

  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay(5000);

  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  delay(2000);

  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(5000);

  digitalWrite(green,LOW);
}
