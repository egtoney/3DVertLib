OBJECTS = main.o
HEADERS = vect4.h mat4.h

lab8: $(OBJECTS)
		g++ -g -std=c++11 $^ -o graphics

%.o: %.cpp $(HEADERS)
		g++ -g -std=c++11 -c $< -o $@

clean:
		rm -f *.o graphics