class espresso:

   def __init__(self, debugMode=False):
      if debugMode is True:
	 self.debugMode=True
      else:
	 self.debugMode=False
      self.brewTemp = 93
      self.brewSecs = 20
      self.msg = "Hello, Dave"
      self.level = 0
      self.brewSettings = {}
      self.programMode = [ "brewTemp", "brewTime", "preinfusionTemp", "preinfusionTime", "setTimeout", "loadProfile", "showSettings" ]
      self.progMode = self.msg


   def set_programMode(self):
      progMode = raw_input("Select Mode: ")
      self.progMode = str(progMode)

   def get_programMode(self):
      return self.progMode

   def debug_show_functionName(self,functionName):
      print self.msg + "\tYou are in the " +  functionName + " function"

   def set_temp(self,tempType="brew",newTemp=0):
      tempType = str(tempType) + "Temp"
      if self.debugMode is True:
         functionName = inspect.stack()[0][3]
         self.debug_show_functionName(functionName)

      if newTemp > 0:
         self.brewTemp = int(newTemp)
      else:
         self.brewTemp = raw_input(tempType + " Temp: ")
         self.brewSettings[tempType] = self.brewTemp

   def get_temp(self):
      if self.debugMode is True:
         functionName = inspect.stack()[0][3]
         self.debug_show_functionName(functionName)
      return int(self.brewTemp)


   def get_brewSettings(self):
      if self.debugMode is True:
         functionName = inspect.stack()[0][3]
         self.debug_show_functionName(functionName)
      return str(self.brewSettings)

   def greetings(self):
      print self.msg


   def set_seconds(self,newSecs=0):
      if self.debugMode is True:
         functionName = inspect.stack()[0][3]
         self.debug_show_functionName(functionName)

      if newSecs > 0:
         self.brewSecs = int(newSecs)
      else:
         self.brewSecs = raw_input("Brew Time: ")

      self.brewSettings["brewSecs"] = self.brewSecs


   def get_seconds(self):
      if self.debugMode is True:
         functionName = inspect.stack()[0][3]
         self.debug_show_functionName(functionName)
	 
         self.brewSettings["brewSecs"] = self.brewSecs

      return int(self.brewSecs)

   def set_time(self,timeType="brew",secs=0):
      timeType = str(timeType) + "Secs"
      if self.debugMode is True:
         functionName = inspect.stack()[0][3]
         self.debug_show_functionName(functionName)

      self.brewSettings[timeType] = raw_input(timeType + " Time (in seconds): ")

