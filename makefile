run: compile_and_link
	./bin/exec_file

compile_and_link: clean
	g++ -std=c++17 -g -Wall -I "./inc/" \
	./src/main.cpp ./src/nutility.cpp ./src/sentence.cpp \
	-o ./bin/exec_file

clean: 
	clear

