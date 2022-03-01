SOURCE_FILES=main.cpp ../MedisoTest2/MTriangle.cpp
INCLUDES=-I../gtest/include/gtest/ -I../MedisoTest2/
LIBRARIES=../gtest/lib




output: ${SOURCE_FILES}
g++ ${SOURCE_FILES} ${INCLUDES} -L${LIBRARIES} -lgtest -lpthread -o output