CC      = g++
SOURCES = coffee-menu.cpp
OBJECTS = foo.o
TARGET  = asdf
RM      = /bin/rm -rf
STRIP   = /usr/bin/strip

all:
	$(CC) $(SOURCES) -o $(TARGET)
	$(STRIP) $(TARGET)

clean:
	$(RM) $(TARGET) *.o *.tmp *.out

