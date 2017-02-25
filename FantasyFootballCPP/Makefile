SRC=main.cpp player.cpp positions.cpp team.cpp league.cpp
OBJ=$(SRC:.cpp=.o)

prog: $(OBJ)
	g++ $(OBJ) -o fantasy

.C.o: $<
	g++  -g -I. -c $<

clean:
	rm *.o fantasy
