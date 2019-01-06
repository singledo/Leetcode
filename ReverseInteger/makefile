cc=gcc
cflag= -g

src=./src/main.c \
	./src/reverse.c

inc=-I ./inc \
	-I ../com/inc

lib=-lmath

obj=$(src:.c=.o)

tar=reverse.out

$(tar): $(obj)
	$(cc) $(cflag) $(inc) -o $@ $^ 

%.o:%.c
	$(cc) $(cflag) $(inc) -o $@ -c $< 

clean:
	rm src/*.o $(tar)

