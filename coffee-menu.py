#! /usr/bin/python

import sys,inspect,os
import readline
histfile = os.path.join(os.path.expanduser("~"), ".pyhist")
try:
    readline.read_history_file(histfile)
except IOError:
    pass
import atexit
atexit.register(readline.write_history_file, histfile)
del os, histfile
sys.path.append("./class")
from espresso import *
m = espresso()
print "\nCoffee Menu System v1.0"
print "======================="
while m.progMode != "q":

   for pMode in m.programMode:
      print "\t" + str(pMode)

   m.set_programMode()
   print "\nCurrent Mode Selection:\t" + m.get_programMode()
   print "\n"

   if m.progMode == "showSettings":
      print m.get_brewSettings()

   if m.progMode == "brewTemp":
      m.set_variable("brewTemp")

   if m.progMode == "brewTime":
      m.set_variable("brewTime")

   if m.progMode == "preinfusionTime":
      #m.set_time(timeType="preinfusion")
      m.set_variable("preinfusionTime")


   if m.progMode == "preinfusionTemp":
      #m.set_temp(tempType="preinfusion")
      m.set_variable("preinfusionTemp")

   #if m.progMode == "loadProfile":
   #
   #if m.progMode == "setTimeout":
   #   m.set_seconds()
   #   m.get_seconds()



#sys.exit("\nBailing...\n")




