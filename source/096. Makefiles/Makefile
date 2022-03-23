# target: dependencies
# 	recipes (commands)
CC = gcc
CPPFLAGS = -I.
OBJECT_FILES = main.o complex_numbers.o
RM = rm -f 

complex: $(OBJECT_FILES)
	$(CC) -o complex $(OBJECT_FILES) $(CPPFLAGS)

main.o: complex_numbers.h

complex_numbers.o: complex_numbers.h

clean: 
	$(RM) complex $(OBJECT_FILES)