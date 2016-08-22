CFILE	=	md5test.c

CFILE_O	=	md5test

CFLAGS	=	-I/usr/local/include	\
		-L/usr/local/lib	\

LFLAGS	=	-lcrypto

all:	
	gcc $(CFILE) -o $(CFILE_O) $(CFLAGS) $(LFLAGS)

clean:	
	rm $(md5test)
