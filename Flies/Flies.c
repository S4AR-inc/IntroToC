#include <stdio.h>

void copyFile(FILE* sourceFile, FILE* destFile) {
	char c = fgetc(sourceFile);
	while (c != EOF)
	{
		fputc(c, destFile);
		c = fgetc(sourceFile);
	}
}

int main()
{
	FILE* sourceFile;
	fopen_s(&sourceFile ,"source.txt", "r");
	FILE* destFile;
	fopen_s(&destFile ,"dest.txt", "w");

	if (sourceFile == NULL || destFile == NULL) {
		return 1;
	}

	copyFile(sourceFile, destFile);

	fclose(sourceFile);
	fclose(destFile);
}
