class Output
  { 
  public:
    Output(String chan);
    void say(String text);
  
  private:
    String channel;
  };

Output::Output(String chan)
  {
  channel = chan;
  if (channel == "serial")
    Serial.begin(9600);
  }

void Output::say(String text)
  {
  if (channel == "serial")
    {
    Serial.println(text);
    }
  }
