
COMMON_SOURCES=Calculadora.cpp Dispositivo.cpp
MAIN_SOURCES=$(COMMON_SOURCES) main.cpp
UNIT_SOURCES=$(COMMON_SOURCES) UnitTests.cpp
LDFLAGS=
CFLAGS=-c -Wall -O2
CC=g++

MAIN_OBJECTS=$(MAIN_SOURCES:%.cpp=build/%.o)
UNIT_OBJECTS=$(UNIT_SOURCES:%.cpp=build/%.o)


main: $(MAIN_OBJECTS)
	$(CC) -o build/main $(MAIN_OBJECTS) $(LDFLAGS)

unit: $(UNIT_OBJECTS)
	$(CC) -o build/unit $(UNIT_OBJECTS) $(LDFLAGS)

build/%.o: %.cpp
	mkdir -p build
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f *.o
	rm -f main
	rm -f unit
	rm -rf build