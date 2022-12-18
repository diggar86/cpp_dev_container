CC = g++
CFLAGS = -Wall -g
SOURCES_DIR = sources
HEADER_DIR = header

main: main.o test_source.o test_class.o
	$(CC) $(CFLAGS) -o myapp main.o test_source.o test_class.o

main.o: main.cpp $(HEADER_DIR)/test_header.h $(SOURCES_DIR)/test_source.h $(SOURCES_DIR)/test_class.h
	$(CC) $(CFLAGS) -c main.cpp

test_source.o: $(SOURCES_DIR)/test_source.cpp $(SOURCES_DIR)/test_source.h
	$(CC) $(CFLAGS) -c sources/test_source.cpp

test_class.o: $(SOURCES_DIR)/test_class.cpp $(SOURCES_DIR)/test_class.h
	$(CC) $(CFLAGS) -c $(SOURCES_DIR)/test_class.cpp