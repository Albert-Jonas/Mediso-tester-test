TARGET = MedisoTest2

SOURCES = main.cpp MTriangle.cpp

CXXFLAGS = -Wall -Wextra -Weffc++
LDFLAGS = -static

CXX := g++
CPP := gcc -E
LD := $(CXX)

OBJECTS = $(SOURCES:.cpp=.o)
DEPS = $(SOURCES:.cpp=.d)

.PHONY: all
all:$(TARGET)

$(TARGET): $(OBJECTS)
	$(LD)  $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.cpp
	@$(CPP) -MM -MG -MP -MF $*.d $<
	$(CXX) -c $(CXXFLAGS) -o $@ $<

-include $(DEPS)

.PHONY: clean
clean:
	-rm -rf $(TARGET) $(OBJECTS) $(DEPS)
