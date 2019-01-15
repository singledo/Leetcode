cc=gcc
cflag=-g

inc=-I ../com/inc \
	-I ./inc \

src=./src/list.c \
	./src/main.c 

obj=$(src:.c=.o)

tar=list.out

$(tar): $(obj)
	$(cc) $(cflag) $(inc) -o $@ $^

%.o: %.c
	$(cc) $(cflag) $(inc) -o $@ -c $<


clean:
	-rm src/*.o $(tar)




