CXXFILES := main.cpp  AMDapple.cpp apple.cpp  intelapple.cpp AMDfactory.cpp foodfactory.cpp intelfactory.cpp AMDbeef.cpp beef.cpp intelbeef.cpp
OBJS :=
TARGET := AbstractFactory

CC := g++
LIBS :=
LDFLAGS := -L.
DEFINES :=
INCLUDE := -I ./
CFLAGS :=
CXXFLAGS :=

all:
	$(CC) $(CXXFILES) $(INCLUDE) $(LDFLAGS)  $(LIBS) $(CXXFLAGS) -o $(TARGET)
clean:
	rm -rf *.o
	rm -rf $(TARGET)



