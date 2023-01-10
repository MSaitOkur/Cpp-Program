run: compile_and_link
	./test

compile_and_link: clean
	g++ -std=c++17 -g -Wall -I "./inc/" \
	./src/main.cpp ./src/nutility.cpp \
	-o test

clean: 
	clear
