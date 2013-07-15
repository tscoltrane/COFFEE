#! /usr/bin/python

import sys,inspect
sys.path.append("/home/tsayers/COFFEE/class")
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
      m.set_temp(tempType="brew")

   if m.progMode == "brewTime":
      m.set_time(timeType="brew")

   if m.progMode == "preinfusionTime":
      m.set_time(timeType="preinfusion")


   if m.progMode == "preinfusionTemp":
      m.set_temp(tempType="preinfusion")

   #if m.progMode == "loadProfile":
   #
   #if m.progMode == "setTimeout":
   #   m.set_seconds()
   #   m.get_seconds()



#sys.exit("\nBailing...\n")




