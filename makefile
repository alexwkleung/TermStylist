CXX = g++
CPPFLAGS = -std=c++17 -Wall -Wextra -g 
VAR = demo/demo.cpp
OUT = demo/a.o

.PHONY: build
build:
	${CXX} ${CPPFLAGS} ${VAR} -o ${OUT} && ./${OUT}

.PHONY: clean
clean:
	rm ${OUT}