// This file is like air. The controller (you) gives an order to Spidey
// If she decides to follow it, or kill you, is her decision.
void loop()
  {
  String action = Controller.getAction();
  
  if (action == "forward")
    {
    Spidey.forward();
    }
  
  else if (action == "backward")
    {
    Spidey.backard();
    }
  
  else if (action == "grab")
    {
    Spidey.grab();
    }
  
  // Default action
  else
    {
    Spidey.idle();
    }
  
  delay(10);
  }
