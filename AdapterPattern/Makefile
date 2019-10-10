CXXFILES := main.cpp  adapter.cpp Chinajack.cpp jackadapter.cpp jack.cpp USAjack.cpp
OBJS :=
TARGET := Adapter

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



