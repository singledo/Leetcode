cc=gcc
cflag=-g

inc=-I ../com/inc \
	-I ./inc \
	-I ../MinWindows/inc

src=./src/anagram.c \
	./src/main.c \
	../MinWindows/src/HashMap.c

obj=$(src:.o=.c)

tar=anagram.out

$(tar): $(obj)
	@echo $(obj)
	$(cc) $(cflag) $(inc) -o $@ $^


%.o: %.c
	$(cc) $(cflag) $(inc) -o $@ -c $<



clean:
	-rm src/*.o $(tar)



	
