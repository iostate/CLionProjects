CC=g++ 
CPPFLAGS=--std=c++11

all: project3.cpp MapObject.o map.o MapObjectList.o
	$(CC) $(CPPFLAGS) project3.cpp MapObject.o map.o MapObjectList.o -o project3

MapObject.o: MapObject.cpp
	$(CC) $(CPPFLAGS) -c MapObject.cpp

MapObjectList.o: MapObjectList.cpp
	$(CC) $(CPPFLAGS) -c MapObjectList.cpp

map.o: map.cpp
	$(CC) $(CPPFLAGS) -c map.cpp

clean:
	rm -f *.o *.exe *~
