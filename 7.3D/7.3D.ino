
 int val = 0;
 boolean alarm_mode = false;

 
void setup() 
{
  Serial.begin(9600);
  pinMode(6, INPUT);     // declare sensor as input
  pinMode(12, INPUT);    // declare button as input
  pinMode(5, OUTPUT);    // declare alarm as output
  
}
 
void loop()
{
    digitalWrite(5, LOW);  // set alarm off as default
    val = digitalRead(6);  // read input of motion sensor
    
    if (val == HIGH) 
    {
      Serial.println("Active!");
      delay(100)
       if (val == HIGH)
       {
        alarm_mode = true;
        break;
       }
       else
       {
        break;
       }
    }
    
   else if (val == LOW)
   {
      Serial.println("Inactive");
      alarm_mode = false;
      break;
    }

   while (alarm_mode == true)
   {
    digitalWrite(5, HIGH);
    delay(3000);
    if (digitalRead(12, HIGH) // if the button is pressed we want the system to reset
    {
      return 0;
    }
   }

   else if (alarm_mode == false)
   {
    return 0;
   }

  
}
