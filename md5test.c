/* md5testc. */


#include <stdio.h>
#include <stdlib.h>
#include <openssl/md5.h>

int main()
{
	char	*mac	= {"muyunlei"};
	char	*md;
	md = (char *)MD5((const unsigned char *)mac, sizeof(mac), NULL);
	int len = strlen(md);
	printf("%d,%x\n", len, md);
	
	return 0;
}
