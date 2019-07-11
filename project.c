#include <stdio.h>
#include <string.h>

void main()
{
	char input[2];
	char First_Name[10], Last_Name[10];
	char fullname[20];
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

printf("\033[1;31m");
printf("This is MedProgram. This program will assess your health.... \n");
printf("\033[0m");
printf("\033[0;32m");
printf("Enter Your First_Name: ");
scanf("%s", First_Name);
printf("\033[0m");
printf("\033[1;32m");
printf("Enter Your Last_Name: ");
scanf("%s", Last_Name);
printf("\033[0m");
printf("\033[0;31m");
printf("Are you currently feeling unwell[y/n]❓ ");
printf("\033[0m");
char answer[10];
scanf("%s", answer);
printf("You entered %s \n", answer);


	switch(answer[0])
	{
		case 'n':
			printf("\033[01;33m");
			printf("That is great. Have a nice day %s %s 😀 ✅  \n", First_Name, Last_Name);
			printf("\033[0m");
			break;

		case 'y':
			printf("The program will now assess your health...\n");
			printf("Do you have a Headache[y/n]❓ ");
			char answer[10];
			scanf("%s", answer);
			printf("You entered %s\n", answer);

			if(strcmp(answer, "y")==0)
			{
				printf("Do you have Muscle Aches[y/n]❓ ");
				scanf("%s", answer);
				printf("You entered %s\n", answer);

				if(strcmp(answer, "y")==0)
				{
					printf("Do you have a Loss of Appetite[y/n]❓ ");
					scanf("%s", answer);
					printf("You entered %s\n", answer);

					if(strcmp(answer, "y")==0){
						printf("Are you experiencing pain in swollen salivary glands[y/n]❓ ");
						scanf("%s", answer);
						printf("You entered %s\n", answer);
						
						if(strcmp(answer, "y")==0){
							printf("\033[0;34m");
							printf("You may have mumps🤒 ‼\n");
 ;
							printf("\033[0m");
							printf("\033[1;36m"); // Color all the following printf statements to this color
							printf("EXPLANATION: ");
							printf("\033[0m");  // Reset the color to the default terminal color
							printf("Mumps is a viral infection that primarily affects saliva-producing (salivary) glands that are located near your ears. It is a viral disease so antibiotics will not affect it. Mumps is highly contagious for about nine days after symptoms appear.\n");
							printf("\033[1;34m");
							printf("ADVICE: ");
							printf("\033[0m");
 							printf("Rest as much as possible. Take painkillers such as paracetamol and ibuprofen regularly. You should arrange a doctors appointment as soon as possible!\n");
						} else if(strcmp(answer, "n")==0) {
							printf("\033[0;34m");
							printf("You may have chicken pox🤒 ‼\n");
							printf("\033[0m");	
							printf("\033[1;36m");
							printf("EXPLANATION: ");
							printf("\033[0m");
							printf("Chicken pox is a mild and common childhood illness that most children catch at some point. Chickenpox is caused by a virus called the varicella-zoster virus. It's spread quickly and easily through the coughs and sneezes of someone who is infected.\n");
							printf("\033[1;34m");
							printf("ADVICE: ");
							printf("\033[0m");
printf("If your child is in pain or has a fever, you can give them a mild painkiller, such as paracetamol. It is important for people with chickenpox to drink plenty of water to avoid dehydration.\n");
						}
						
					} else if(strcmp(answer, "n")==0) {
						printf("\033[0;34m");
						printf("You may have a fever🤒 ‼\n");
						printf("\033[0m");
						printf("\033[1;36m");
						printf("EXPLANATION: ");
						printf("\033[0m");
						printf("Any temperature of 38°C (100.4°F) or above is considered high and is classed as a fever. You may feel warm, cold or shivery.\n");
						printf("\033[1;34m");
						printf("ADVICE: ");
						printf("\033[0m");
						printf("Take a medicine that reduces fever such as paracetamol. Don't over dress. Wear loose comfortable clothing and make sure the room you are in isn't too warm. You sweat more when you have a fever so you should drink more fluids to makes sure you don't get dehydrated.\n");
					}
				} else if(strcmp(answer, "n")==0) 
				{
					printf("Do you have blurred vision[y/n]❓ ");
					scanf("%s", answer);
					printf("You entered %s\n",  answer);

					if(strcmp(answer, "y")==0){
						printf("\033[0;34m");
						printf("You may have a migrane🤒 ‼\n");
						printf("\033[0m");
						printf("\033[1;36m");
						printf("EXPLANATION: ");
						printf("\033[0m");
      						printf("A migraine can cause severe throbbing pain or a pulsing sensation, usually on one side of the head. It's often accompanied by nausea, vomiting, and extreme sensitivity to light and sound. Migraine attacks can last for hours to days, and the pain can be so severe that it interferes with your daily activities.\n");
						printf("\033[1;34m");
						printf("ADVICE: ");
						printf("\033[0m");
						printf("If you regularly have signs and symptoms of a migraine, keep a record of your attacks and how you treated them. Then make an appointment with your doctor to discuss your headaches. Medications can help prevent some migraines and make them less painful.\n");
					} else if(strcmp(answer, "n")==0) {
						printf("\033[0;34m");
						printf("You may have the flu🤒 ‼\n");
						printf("\033[0m");
						printf("\033[1;36m");
						printf("EXPLANATION: ");
						printf("\033[0m");
						printf("The flu (also known as influenza) is a highly infectious illness caused by the flu virus. The virus infects your lungs and upper airways, causing a sudden high temperature. You may also lose your appetite, feel nauseous and have a dry cough.\n");
						printf("\033[1;34m");
						printf("ADVICE: ");
						printf("\033[0m");
						printf("The best thing you can do to recover from the flu is allow yourself to sleep, rest, and drink lots of fluids. You can use mild pain killers and decongestants to alleviate the pain.\n");
					}
				}		
			} else if(strcmp(answer, "n")==0)	
			{
				printf("Do you have enlarged lymph nodes in your neck[y/n]❓ ");
				scanf("%s", answer);
				printf("You entered %s\n", answer);
			
				if(strcmp(answer, "y")==0){
					printf("Are you experiencing extreme tiredness[y/n]❓ ");
					scanf("%s", answer);
					printf("You entered %s\n", answer);
					
					if(strcmp(answer, "y")==0)
					{
						printf("\033[0;34m");
						printf("You may have glandular fever🤒 ‼\n");
						printf("\033[0m");
						printf("\033[1;36m");
						printf("EXPLANATION: ");
						printf("\033[0m");
						printf("Glandular fever is a viral infection caused by a member of the herpes virus family, the Epstein-Barr virus. The infection is transmitted from one person to another via the saliva.\n");
						printf("\033[1;34m");
						printf("ADVICE: ");
						printf("\033[0m");
						printf("If you think that you may have glandular fever you should make a doctors appointment as soon as possible. Your doctor will take a blood test to confirm whether your symptoms are due to glandular fever. As glandular fever is a viral infection, antibiotics are ineffective against the disease. Take plenty of rest, especially during the acute part of the illness.\n");
					} else if(strcmp(answer, "n")==0)
					{
						printf("Do you have red spots on the hard or soft palate at the back of the roof of your mouth[y/n]❓ ");
						scanf("%s", answer);
						printf("You entered %s\n", answer);
						
						if(strcmp(answer, "y")==0){
							printf("\033[0;34m");
							printf("You may have a strep throat🤒 ‼\n");
							printf("\033[0m");
							printf("\033[1;36m");
							printf("EXPLANATION: ");
							printf("\033[0m");
							printf("Strep throat is a bacterial infection that can make your throat feel sore and scratchy. It is caused by the bacteria known as Streptococcus pyogenes.Ton \n");
							printf("\033[1;34m");
							printf("ADVICE: ");
							printf("\033[0m");
							printf("If you think that you may have strep throat you should make a doctors appointment as soon as possible. A doctor can perform a rapid antigen or a throat culture test to see if you have strp throat. If you do have strep throat, your doctor may give you an antibiotic prescription. Lots of rest will help your bodie's fight against the infection.\n");
						} else if(strcmp(answer, "n")==0) {
							printf("\033[0;34m");
							printf("You may have tonsilitis🤒 ‼\n");
							printf("\033[0m");
							printf("\033[1;36m");
							printf("EXPLANATION: ");
							printf("\033[0m");
							printf("Tonsillitis is inflammation of the tonsils, two oval-shaped pads of tissue at the back of the throat.\n");
							printf("\033[1;34m");
							printf("ADVICE: ");
							printf("\033[0m");
							printf("If you think that you may have tonsilitis you should make a doctors appointment as soon as possible. Antibiotics can be used to treat bacterial tonsillitis but not viral tonsilitis. You can take paracetamol or ibuprofen to ease symptoms such as pain, headaches and fever.\n");

						}
					}
					
					
				} else if(strcmp(answer, "n")==0) {
					printf("Are you experiencing congestion[y/n]❓ ");
					scanf("%s", answer);
					printf("You entered %s\n", answer);
				
					if(strcmp(answer, "y")==0){
						printf("\033[0;34m");
						printf("You may have a cold🤒 ‼\n");
						printf("\033[0m");
						printf("\033[1;36m");
						printf("EXPLANATION: ");
						printf("\033[0m");
						printf("A cold is a general term used to refer to a mild viral infection of the nose, throat, sinuses and upper airways. It is a self-limiting infection, which means it gets better by itself without the need for treatment.\n");
						printf("\033[1;34m");
						printf("ADVICE: ");
						printf("\033[0m");
						printf("You generally do not need to go to the doctor when you have a cold. There are many ways of treating a common cold including: Drinking plenty of fluids, takings plenty of naps, gargling, using vapor rubs and eating menthol sweets.\n");
					} else if(strcmp(answer, "n")==0) {
						printf("\033[0;34m");
						printf("You may have food poisoning🤒 ‼\n");
						printf("\033[0m");
						printf("\033[1;36m");
						printf("EXPLANATION: ");
						printf("\033[0m");
						printf("Food poisoning is caused by eating contaminated food.\n");
						printf("\033[1;34m");
						printf("ADVICE: ");
						printf("\033[0m");
						printf("In most cases of food poisoning, you can relieve your symptoms at home without needing to see a doctor. Aim to drink at least two litres of water a day, as well as 200ml  of water every time you have diarrhoea. If you are more vulnerable to the effects of dehydration (for example, if you are elderly or already have a health condition), oral rehydration salts are recommended.\n");
					}
					}
			}
{ 
printf("\033[0;35m");
printf("Thank you for using MedProgram %s %s 😀 ✅ \n", First_Name, Last_Name);
printf("\033[0m");
}
			break;
		

	}
}

