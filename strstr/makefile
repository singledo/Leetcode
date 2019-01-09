cc=gcc
cflag= -g

inc=-I ./inc \
	-I ../com/inc

src= ./src/strstr.c \
	./src/main.c

obj=$(src:.c=.o)

tar=str.out

# $@: target file 
# @^: denpendence file 
# $^: first denpendence file 
#

$(tar): $(obj)
	$(cc) $(cflag) $(inc) -o $@ $^

%.o: %.c
	$(cc) $(cflag) $(inc) -o $@ -c $<

.PHONY: clean
clean:
	-rm src/*.o $(tar)

