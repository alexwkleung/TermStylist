CXX = g++
CPPFLAGS = -std=c++17 -Wall -Wextra -g 

VAR_DEMO = demo/demo.cpp
OUT_DEMO = demo/a.o

VAR_TEST = test/test_termstylist.cpp
OUT_TEST = test/a.o

# demo 
.PHONY: build
build:
	${CXX} ${CPPFLAGS} ${VAR_DEMO} -o ${OUT_DEMO} && ./${OUT_DEMO}

# test
.PHONY: test
test:
	${CXX} ${CPPFLAGS} ${VAR_TEST} -o ${OUT_TEST} && ./${OUT_TEST}

# clean
.PHONY: clean
clean:
	rm ${OUT_DEMO} || rm ${OUT_TEST}