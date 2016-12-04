// The boss
Spider Spidey;

// The controller for Spidey
// args: 'joystick', 'serial', 'ai'
Controller Controller("joystick");

// The information Spidey says
// arg: 'serial', 'mute'
Output Out("serial");

// The arduino setup
void setup()
  {
  // THE SERVO ATTACH NEEDS TO BE HERE. OTHERWISE, THE SERVOS ACT UP
  // Initialize Hips
  bottomlefthip.attach(2);
  middlelefthip.attach(3);
  toplefthip.attach(4);
  toprighthip.attach(5);
  middlerighthip.attach(6);
  bottomrighthip.attach(7);
  
  // Iniialize Knees
  bottomleftknee.attach(8);
  middleleftknee.attach(9);
  topleftknee.attach(10);
  toprightknee.attach(11);
  middlerightknee.attach(12);
  bottomrightknee.attach(13);
  }
