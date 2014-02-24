PROGRAM = FigMan

CXXFLAGS = -O2 -std=c++11 -g -Wall

SRC = $(wildcard src/*.cpp)

OBJS = 

INCLUDES = 

LIBS =

$(PROGRAM): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(SRC) $(INCLUDES) $(LIBS)

all: $(PROGRAM)

clean:
	rm -f $(PROGRAM)
