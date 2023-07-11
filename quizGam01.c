#include <stdio.h>

char quiz();

int main(){
	printf("\n");
	printf("\t \t \t Quiz Game With RoboKiddi \n");
	printf("\n#################################################### \n");
	
	char YorNo;
	printf("Do you want to play a quiz Game with me? \n ['Y' for yes, 'N' for No]: ");
	scanf("%c", &YorNo);
	
	printf("\n#################################################### \n");
	
	if(YorNo == 'Y'|| YorNo == 'y')
	{
		quiz();
	}else if(YorNo == 'N' || YorNo == 'n')
	{
		printf(">>>>>>>Game Terminated<<<<<<<<");
		return 0;
	}else
	{
		printf("Invalid Answer");
	}
	
	return 0;
}
char quiz() {
	printf("Takenote: There are 5 questions to answer, at the \n end of the game your score would be displayed and \n if you got all questions correct, you would be \n rewarded. \n \n");
	printf("Instruction: select an answer suitable for each \n question \n");
	printf("\n");
	printf("\n");
	//printf("\n");
	int correctAnswer = 0;
	int wrongAnswer = 0;
	int counter = 0;
	int repeat = 1;
	int questions;
	
	
	while(repeat == 1)
	{
		char question1;
		char question2;
		char question3;
		char question4;
		char question5;
		printf("\n");
		printf("Select Question from 1 to 5: ") ;
		scanf("%d", &questions);
		switch(questions)
		{
			/******************************
			Question 1
			******************************/
			case 1:	
			printf("Question 1: ");		
			printf("Who is the owner of twitter? \n");
			printf("(a) Elon Musk \n (b) Mark Zukerberg \n (c) Bill Gates \n \n");
			printf("Select Answer: ");
			scanf("%c", &question1);
			counter += 1;
			
			if(question1 == 'a' || question1 == 'A')
			{
				correctAnswer += 1;
			}else if(question1 == 'b' || question1 == 'B')
			{
				wrongAnswer += 1;
			}else if(question1 == 'c' || question1 == 'C')
			{
				wrongAnswer += 1;
			}
			else
			{
				printf("Invalid Answer");
				counter -= 1;
			}
			break;
			
			
			/******************************
			Question 2
			******************************/
			case 2:
			printf("Question 2: ");		
			printf("Where is the Petra Located? \n");
			printf("(a) Dubai \n (b) Egypt \n (c) Jordan \n \n");
			printf("Select Answer: ");
			scanf("%c", &question2);
			counter += 1;
			
			if(question2 == 'c' || question2 == 'C')
			{
				correctAnswer += 1;
			}else if(question2 == 'b' || question2 == 'B')
			{
				wrongAnswer += 1;
			}else if(question2 == 'a' || question2 == 'A')
			{
				wrongAnswer += 1;
			}
			else
			{
				printf("Invalid Answer");
				counter -= 1;
			}
			break;
			
			/******************************
			Question 3
			******************************/
			case 3:
			printf("Question 3: ");		
			printf("WhO did Rema feature in his song calm down? \n");
			printf("(a) Miley cyrus \n (b) Ariana Grande \n (c) Selena Gomez \n \n");
			printf("Select Answer: ");
			scanf("%c", &question3);
			counter += 1;
			
			if(question3 == 'c' || question3 == 'C')
			{
				correctAnswer += 1;
			}else if(question3 == 'b' || question3 == 'B')
			{
				wrongAnswer += 1;
			}else if(question3 == 'a' || question3 == 'A')
			{
				wrongAnswer += 1;
			}
			else
			{
				printf("Invalid Answer");
				counter -= 1;
			}
			break;
			
			/******************************
			Question 4
			******************************/
			case 4:
			printf("Question 4: ");		
			printf("Which county won the world cup 2022? \n");
			printf("(a) Argentina \n (b) Portugal \n (c) France \n \n");
			printf("Select Answer: ");
			scanf("%c", &question4);
			counter += 1;
			
			if(question4 == 'a' || question4 == 'A')
			{
				correctAnswer += 1;
			}else if(question4 == 'b' || question4 == 'B')
			{
				wrongAnswer += 1;
			}else if(question4 == 'c' || question4 == 'C')
			{
				wrongAnswer += 1;
			}
			else
			{
				printf("Invalid Answer");
				counter -= 1;
			}
			break;
			
			
			/******************************
			Question 5
			******************************/
			case 5:
			printf("Question 5: ");		
			printf("Which of the option contains protein? \n");
			printf("(a) Rice \n (b) Egg \n (c) Yam \n \n");
			printf("Select Answer: ");
			scanf("%c", &question5);
			counter += 1;
			
			if(question5 == 'b' || question5 == 'B')
			{
				correctAnswer += 1;
			}else if(question5 == 'c' || question5 == 'C')
			{
				wrongAnswer += 1;
			}else if(question5 == 'a' || question5 == 'A')
			{
				wrongAnswer += 1;
			}
			else
			{
				printf("Invalid Answer");
				counter -= 1;
			}
			break;
		}
		
		
		
		if(counter == 5)
		{
			break;
		}
	}
	/******End of switch******/
	printf("\n#################################################### \n");
	printf("You scored: %d  \n", correctAnswer);
	printf("failed questions: %d  \n", wrongAnswer);
	printf("\n#################################################### \n");
}

