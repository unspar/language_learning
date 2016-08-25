#include <stdio.h>
#include <stdlib.h>

int calc_weeks(int starting_fruit, int starting_plants, int people){

	if(starting_fruit <= 0 && starting_plants <=0){
		return -1;
	};

	int weeks = 0;
	
	int fruit = 0;//starting_fruit;
	int plants = starting_fruit;

	while(fruit < people){
		fruit = fruit + plants;//next_fruit(plants, fruit);
		plants = plants + fruit;//next_plants(plants, fruit);

		++weeks;
	}
	
	return weeks;

};


int main (){

	printf("200, 15: %d\n", calc_weeks(15, 0, 200));
	printf("50000, 1: %d\n", calc_weeks(1, 0, 50000));
	printf("150000, 250: %d\n", calc_weeks(250, 0, 150000));

	return 0;
}











