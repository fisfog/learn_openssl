/* md5testc. */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>

int main()
{
	char	*mac	= {"muyunlei"};
	char	*md;
	md = (char *)MD5((const unsigned char *)mac, sizeof(mac), NULL);
	int	len = strlen((char *)md);
	char	strmd5[1024] = {0};
	int	i;
	for(i=0;i<len;++i)
	{
		sprintf(strmd5+strlen(strmd5),"%02X",md[i]&0xFF);
	}
	printf("%d,%s\n", len, strmd5);
	
	return 0;
}
