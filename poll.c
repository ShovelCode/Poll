#include <stdio.h>

#define RESPONSES_SIZE 10
#define FREQUENCY_SIZE 11

int main(void){
	int answer;
	int rating;

	int frequency[FREQUENCY_SIZE] = { 0 };

	int responses[RESPONSES_SIZE] = {1,2,3,4,5,6,7,8,9,10};

	for(answer = 0; answer < RESPONSES_SIZE; ++answer){
		++frequency[responses[answer]];

	}

	printf("%s%17s\n", "Rating", "Frequency");

	for(rating = 1; rating < FREQUENCY_SIZE; ++rating){
		printf("%6d%17d\n", rating, frequency[rating]);
	}
}
