cc=gcc 
cflag= -g
src= ./src/main.c \
	 ./src/vaild.c

inc= -I ../com/inc \
	 -I ./inc

obj=$(src:.c=.o)

tar=vaild.out

$(tar): $(obj)
	$(cc) $(cflag) $(inc) -o $@ $^

%.o: %.c
	$(cc) $(cflag) $(inc) -o $@ -c $<

clean:
	rm src/*.o $(tar)
