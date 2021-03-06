#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[]){
	struct stat st;
	FILE *fp;

	if (argc != 2){
		fprintf(stderr, "usage: %s message\n", argv[0]);
		exit(EXIT_FAILURE);

	}
        
	remove("sample.txt");

	if ((fp=fopen("./sample.txt", "a")) == NULL){
		fprintf(stderr, "Cannot open\n");
		exit(EXIT_FAILURE);
	}

	fprintf(fp, "%s\n", argv[1]);
	fclose(fp);
	fprintf(stderr, "Write ok\n");
	exit(EXIT_FAILURE);
	return 0;
}
