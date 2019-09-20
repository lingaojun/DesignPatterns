CXXFILES := main.cpp  animal.cpp human.cpp bird.cpp
OBJS :=
TARGET := Strategy

CC := g++
LIBS :=
LDFLAGS := -L.
DEFINES :=
INCLUDE := -I ./
CFLAGS :=
CXXFLAGS := -std=c++14

all:
	$(CC) $(CXXFILES) $(INCLUDE) $(LDFLAGS)  $(LIBS) $(CXXFLAGS) -o $(TARGET)
clean:
	rm -rf *.o
	rm -rf $(TARGET)



