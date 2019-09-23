CXXFILES := main.cpp  circle.cpp greencircle.cpp redcircle.cpp shape.cpp drawAPI.cpp
OBJS :=
TARGET := Bridge

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



