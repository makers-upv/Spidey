// The brains of the spider
// It will decide what the spider needs to do
// It also decides if she wants to kill you or let you live
class Brain
  {
  // Methods available for the loop
  public:
    Brain();
    String findAction(String action);
  
  private:
    // Store last action called
    String lastAction;
  };

String Brain::findAction(String action)
  {
  String toReturn;
  
  if (action == lastAction)
    {
    toReturn = action;
    }
  else
    {
    String newAction = action;
    newAction[0] = toupper(newAction[0]);
    toReturn = "to" + newAction;
    }
  
  lastAction = action;
  return toReturn;
  }
