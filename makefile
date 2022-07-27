CXX = g++
CPPFLAGS = -std=c++17 -Wall -Wextra -g 

VAR_DEMO = demo/demo.cpp
OUT_DEMO = demo/a.o

# demo 
.PHONY: build
build:
	${CXX} ${CPPFLAGS} ${VAR_DEMO} -o ${OUT_DEMO} && ./${OUT_DEMO}

.PHONY: clean
clean:
	rm ${OUT_DEMO}