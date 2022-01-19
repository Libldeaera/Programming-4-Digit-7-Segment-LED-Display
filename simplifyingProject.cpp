const int zero[7] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW};
const int one[7] = {LOW, HIGH, HIGH, LOW, LOW, LOW, LOW};
const int two[7] = {HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH};
const int three[7] = {HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH};
const int four[7] = {LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH};
const int five[7] = {HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH};
const int six[7] = {HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH};
const int seven[7] = {HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW};
const int eight[7] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
const int nine[7] = {HIGH, HIGH, HIGH, LOW, LOW, HIGH, HIGH};

const int* digits[10] = {zero, one, two, three, four, five, six, seven, eight, nine};

const int firstSegmentPin = 2;
const int lastSegmentPin = 8;

const int firstMuxPin = 9;
const int lastMuxPin = 12;

const int displayDigitCount = 4;

void resetDisplay()
{
  for (int i = firstMuxPin; i <= lastMuxPin; ++i)
  {
    digitalWrite(i, HIGH);
  }
}

void writeDisplayDigit(int value, int index)
{
  for (int i = 0; i < 7; ++i)
  {
    digitalWrite(i + firstSegmentPin, digits[value][i]);
  }

  digitalWrite(index + firstMuxPin, LOW);
}

void writeDisplay(int values[displayDigitCount])
{
  for (int i = 0; i < displayDigitCount; ++i)
  {
    resetDisplay();
    writeDisplayDigit(values[i], i);
    delay(1);
  }
}

// the setup routine runs once when you press reset:
void setup() 
{                
  for (int i = firstSegmentPin; i <= lastMuxPin; ++i)
  {
    pinMode(i, OUTPUT); // initialize the digital pins as outputs.
  }
  
  resetDisplay();
}

// the loop routine runs over and over again forever:
void loop()
{
  int values[4] = {1,3,3,7};
  writeDisplay(values);
}
