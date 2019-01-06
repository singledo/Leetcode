cc=gcc
cflag= -g

inc=-I ./inc \
	-I ../com/inc

src= ./src/HashMap.c \
	./src/main.c

obj=$(src:.c=.o)

tar=sild

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

