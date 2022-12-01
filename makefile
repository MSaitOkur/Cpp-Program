run: compile_and_link
	./bin/exec_file

compile_and_link: clean
	g++ -std=c++11 -g -Wall -I "./inc/" \
	./src/main.cpp ./src/nutility.cpp   \
	-o ./bin/exec_file

clean: 
	clear

