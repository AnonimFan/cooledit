CC_NO_CFLAGS = tcc
CFLAGS = -Wall -Wextra
OUTPUT = cled
OBJECT = cled.o
SOURCE = cled.c
CC = $(CC_NO_CFLAGS) $(CFLAGS) -c $(SOURCE) -o cled.o
LD = $(CC_NO_CFLAGS) -o $(OUTPUT) $(OBJECT)

LIBCC = $(CC_NO_CFLAGS) -c libcled.c -o libcled.o -Wall -Wextra
LIBLD = $(CC_NO_CFLAGS) -ar libcled.a libcled.o


all: build

build:
	$(LIBCC)
	$(LIBLD)
	$(CC)
	$(LD)

install:
	sudo cp ./cled /usr/local/bin/cled

clean:
	rm -rf ./cled


