cc=gcc
cflag=-g
inc=-I ../com/inc \
	-I ./inc
src=./src/main.c \
	./src/AddTwoSum.c
obj=$(src:.c=.o)
tar=TwoList.out


$(tar): $(obj)
	$(cc) $(cflag) $(inc) -o $@ $^

%.o: %.c
	$(cc) $(cflag) $(inc) -o $@ -c $<

.PHONY: clean
clean:
	-rm src/*.o $(tar)

