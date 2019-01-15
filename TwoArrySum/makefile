cc=gcc
cflag=-g
src=./src/main.c \
	./src/sum.c

inc=-I ./inc \
	-I ../com/inc


obj=$(src:.o=.c)

tar=sum.out

$(tar): $(obj)
	$(cc) $(cflag) $(inc) -o $@ $^

%.o: %c
	$(cc) $(cflag) $(inc) -o $@ -c $<

clean:
	rm src/*.o $(tar)

