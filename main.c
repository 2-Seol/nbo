#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char** argv){
	FILE* fp1;
	FILE* fp2;
	uint32_t first, second;
	uint32_t tmp1, tmp2;

	fp1 = fopen(argv[1], "rb");
	fread(&tmp1, sizeof(uint32_t), 1, fp1);
	fclose(fp1);
	
	fp2 = fopen(argv[2], "rb");
	fread(&tmp2, sizeof(uint32_t), 1, fp2);
	fclose(fp2);

	first = htonl(tmp1);
	second = htonl(tmp2);

	printf("%d(%#x) + %d(%#x) = %d(%#x) \n", first, first, second, second, first+second, first+second);
	return 0;
}


