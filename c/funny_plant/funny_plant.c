#include <stdio.h>
#include <stdlib.h>



struct plant{
	int age;
	struct plant *next;
};



void plant_fruit(struct plant *someplant){
	//appends a plant to the end of the plant chain
	

	//go to the end of the plant list
	while(someplant -> next != 0){
		someplant = someplant->next;
	};

	//generate a new plant
	someplant->next = malloc(sizeof(struct plant));
	someplant = someplant->next;

	someplant -> age = 0;
	someplant -> next = 0;

	return;
};

void age_plants(struct plant *garden){
	//incriments the age of each plant

	int old_age;
	while(garden -> next != 0){
		garden->age = (garden->age) + 1;
		garden = garden -> next; 
	}

	return;
};

int gather_fruit(struct plant *garden){
	//returns the total of all fruit produced this
	int tot = 0;
	while (garden -> next != 0){
		tot = tot + (garden->age);	
		garden = garden->next;	

	};
	return tot;

};

int count_plants(struct plant *garden){
	
	int count = 0;
	while(garden-> next != 0){
		++count;
		garden = garden->next;
	};
		
	return count;

};

int main (){
	
	int people = 150000;
	int plants = 250;

	//this is the list of plants to make sure we don't lose the list in memory
	struct plant *garden;
	//generates garden struct
	garden =  malloc(sizeof(struct plant));
	garden -> next = 0;
	garden -> age = 0;

	//This is a pointer used to traverse the linked list
	struct plant *conductor;
	conductor = garden; //set to the beginning of the list



	//generate the initial struct
	//note that n is not 0 as the initial struct has been generated
	int n ;
	for(n = 1; n <= plants; ++n){
		plant_fruit(garden);	
	}

	//first round of aging
	age_plants(garden);

	int food = 0;
	int count = 1; //we start on the first week
	while(food <= people){
		food = gather_fruit(conductor);

		//plant the crop
		int n;
		for(n=0;n<food;n++){
			plant_fruit(conductor);
		};

		printf("gathered %d fruit on week %d\n",food, count);
		printf("total plants: %d\n", count_plants(garden));	
		age_plants(garden);
		++count;
	};

	printf("Final collection on week: %d\n", count);



	return 0;
}











