#include <stdio.h>
#include <string.h>

void main()
 {
	char input[2];
	char symptom1[] = "Runny or stuffy nose";
	char symptom2[] = "Sore throat";
	char symptom3[] = "Cough";
	char symptom4[] = "Sneezing";
	char symptom5[] = "Congestion";
	char symptom6[] = "Chills and sweats";
	char symptom7[] = "Headache";
	char symptom8[] = "Fatigue and weakness";
	char symptom9[] = "Nausea and vomiting";
	char symptom10[] = "Stiff neck";
	char symptom11[] = "Blurred vision";
	char symptom12[] = "White or yellow coating or patches on the tonsils";
	char symptom13[] = "Pain chewing or swallowing";
	char symptom14[] = "Enlarged lymph nodes in the neck";
	char symptom15[] = "A high temperature";
	char symptom16[] = "Extreme tiredness";
	char symptom17[] = "Pain in the swollen salivary glands";
	char symptom18[] = "Muscle aches";
	char symptom19[] = "Loss of appetite";
	char symptom20[] = "Diarrhoea";


printf("This is MedProgram. This program will assess your health.... \n");
printf("Are you currently feeling unwell[y/n]? ");
char answer[10];
scanf("%s", answer);
printf("You entered %s \n", answer);


	switch(answer[0])
		{
		case 'n':
			printf("That is great. Have a nice day!\n");
			break;

		case 'y':
			printf("The program will now assess your health...\n");
			printf("do you have a Headache[y/n]? ");
			char answer[10];
			scanf("%s", answer);
			printf("You entered %s\n", answer);

			if(strcmp(answer, "y")==0){
				printf("do you have Muscle Aches[y/n]? ");
				scanf("%s", answer);
				printf("You entered %s\n", answer);

				if(strcmp(answer, "y")==0){
					printf("do you have a Loss of Appetite[y/n]? ");
					scanf("%s", answer);
					printf("You entered %s\n", answer);

					if(strcmp(answer, "y")==0){
						printf("Do you have swollen salivary glands[y/n]? ");
						scanf("%s", answer);
						printf("You entered %s\n", answer);
						
						if(strcmp(answer, "y")==0){
							printf("You may have mumps!\n");
						} else {
							printf("You may have chicken pox!\n");
						}
						
					} else {
						printf("You may have a fever!\n");
					}
				} else {
					printf("Do you have blurred vision[y/n]? ");
					scanf("%s", answer);
					printf("You entered %s\n",  answer);

					if(strcmp(answer, "y")==0){
						printf("You may have a migrane!\n");
					} else {
						printf("You may have the flu!\n");
					}
				}		
			} else {
				printf("Do you have enlarged lymph nodes in your neck[y/n]? ");
				scanf("%s", answer);
				printf("You entered %s\n", answer);
			
				if(strcmp(answer, "y")==0){
					printf("Are you experiencing extreme tiredness[y/n]? ");
					scanf("%s", answer);
					printf("You entered %s\n", answer);
					
					if(strcmp(answer, "y")==0){
						printf("You may have glandular fever!\n");
					}
					
				} else {	

					}
			}
			break;
		

	}
}

