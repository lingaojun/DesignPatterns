CXXFILES := main.cpp  Fish.cpp FishProductFactory.cpp SaleFish.cpp Animal.cpp factory.cpp
OBJS :=
TARGET := Factory

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



