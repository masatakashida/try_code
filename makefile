main: main.cpp
	g++ -o main main.cpp Stopwatch.cpp

.PHONY: clean
clean:
	echo "clean"
