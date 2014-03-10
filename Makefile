PROGRAM = FigMan

CXXFLAGS = -O2 -std=c++11 -g -Wall

SRC = $(wildcard src/*.cpp)

EXAMPLE_DIR = examples

EXAMPLES = $(wildcard examples/*.example)

OBJS = 

INCLUDES = 

LIBS =

$(PROGRAM): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(SRC) $(INCLUDES) $(LIBS)

all: $(PROGRAM)

example_cnf:
	$(CXX) $(CXXFLAGS) -o $(EXAMPLE_DIR)/cnf.example $(EXAMPLE_DIR)/ConfigNotFoundExample.cpp $(SRC) $(INCLUDES) $(LIBS)
	
example_ok:
	$(CXX) $(CXXFLAGS) -o $(EXAMPLE_DIR)/ok.example $(EXAMPLE_DIR)/OKExample.cpp $(SRC) $(INCLUDES) $(LIBS)
	
example_knf:
	$(CXX) $(CXXFLAGS) -o $(EXAMPLE_DIR)/knf.example $(EXAMPLE_DIR)/KeyNotFoundExample.cpp $(SRC) $(INCLUDES) $(LIBS)

examples: example_cnf example_ok example_knf
	
run_examples: examples
	./$(EXAMPLE_DIR)/cnf.example
	./$(EXAMPLE_DIR)/ok.example
	./$(EXAMPLE_DIR)/knf.example
	
clean:
	rm -rf $(PROGRAM) *.dSYM $(EXAMPLE_DIR)/*.example $(EXAMPLE_DIR)/*.dSYM	
