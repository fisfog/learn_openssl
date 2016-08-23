CFLAGS	=	-I/usr/local/include	\
		-L/usr/local/lib	\

LFLAGS	=	-lcrypto

all:	md5test 3destest

md5test:
	gcc md5test.c -o md5test $(CFLAGS) $(LFLAGS)

3destest:
	gcc 3destest.c -o 3destest $(CFLAGS) $(LFLAGS)
	
clean:	
	rm -f md5test 3destest 
