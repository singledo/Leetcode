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


%.o: %.c
	$(cc) $(cflag) $(inc) -o $@ -c $<

$(tar): $(obj)
	@echo $(obj)
	$(cc) $(cflag) $(inc) -o $@ $^


clean:
	-rm src/*.o $(tar)



	
