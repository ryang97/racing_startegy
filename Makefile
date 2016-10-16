CXX = g++-5
CXXFLAGS = -std=c++14 -Wall -MMD -g
OBJECTS = main.o time.o race.o
DEPENDS =$ (OBJECTS:.o=.d)
EXEC = time

$(EXEC):${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}


