class Controller
  { 
  public:
    Controller(String ControllerType);
    String getAction();
  
  private:
    String pastAction;
    String type;
    String potentiometer();
  };


Controller::Controller(String ControllerType)
  {
  type = ControllerType;
  Serial.println("Controller initialized");
  }

String Controller::getAction()
  {
  if (type == "joystick") 
    return this->potentiometer();
  else
    return "idle";
  }

String Controller::potentiometer()
  {
  int value = analogRead(A5);
  int button = analogRead(A4);
  String action;
  
  if (button < 300)
    {
    delay(10);
    button += analogRead(A4);
    delay(10);
    button += analogRead(A4);
    button = button / 3;
    }
  
  // If forward is called
  if (value > 700)
    {
    action = "forward";
    }
  
  else if (button < 300)
    {
    action = "grab";
    }
  
  else
    action = "idle";
  
  pastAction = action;
  return action;
  }
