#include <wordBook.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Create(WordBook* wordBook, Long capacity) {
	wordBook->words = (Word(*))calloc(capacity, sizeof(Word));
	wordBook->capacity = capacity;
	wordBook->length = 0;
}
void Destroy(WordBook* wordBook) {
	if (wordBook->words != NULL) {
		free(wordBook->words);
		printf("%s", "�Ҵ� �����Ǿ����ϴ�.");
	}
}