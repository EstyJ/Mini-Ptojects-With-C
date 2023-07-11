#include<stdio.h>
char quiz();
int main() {
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
		return 0;
	}else
	{
		printf("Invalid Answer");
	}

	return 0;
}

char quiz(){
	printf("Takenote: There are 5 questions to answer, at the \n end of the game your score would be displayed and \n if you got all questions correct, you would be \n rewarded. \n \n");
	printf("Instruction: select an answer suitable for each \n question \n");
	
	int correctAnswer = 0;
	int wrongAnswer = 0;
	
	printf("\nQuestion 1 \n");
	char question1;
	printf("Who Is The owner of Twitter: \n");
	printf("(a) Mark Zuckerberg \n (b) Elon Musk \n (c) Bill Gates \n");
	printf("Input answer: ");
	scanf("%c", &question1);
	
	if(question1 == 'b')
	{
		correctAnswer += 1;
	}else if(question1 == 'a'|| question1 == 'c') 
	{
		wrongAnswer += 1;
	}else
	{
		printf("Invalid Option \n");
	}
	
	printf("\n");
	
	printf("Question 2 \n");
	char question2;
	printf("Where is the Petra Located: \n");
	printf("(a) Dubai \n (b) Egypt \n (c) Jordan \n");
	printf("Input answer: ");
	scanf("%c", &question2);
	
	if(question2 == 'c')
	{
		correctAnswer += 1;
	}else if(question2 == 'a'|| question2 == 'b') 
	{
		wrongAnswer += 1;
	}else
	{
		printf("Invalid Option \n");
	}
	
	printf("\n");
	
	printf("Question 3 \n");
	char question3;
	printf("Who did Rema feature in his single CALM DOWN: \n");
	printf("(a) Miley Cyrus \n (b) Ariana Grande \n (c) Selena Gomez \n");
	printf("Input answer: ");
	scanf("%c", &question3);
	
	if(question3 == 'c')
	{
		correctAnswer += 1;
	}else if(question3 == 'a'|| question3 == 'b') 
	{
		wrongAnswer += 1;
	}else
	{
		printf("Invalid Option \n");
	}
	
	printf("\n");
	
	printf("Question 4 \n");
	char question4;
	printf("Which Country won the world cup of 2022: \n");
	printf("(a) Argentina \n (b) Portugal \n (c) France \n");
	printf("Input answer: ");
	scanf("%c", &question4);
	
	if(question4 == 'a')
	{
		correctAnswer += 1;
	}else if(question4 == 'b'|| question4 == 'c') 
	{
		wrongAnswer += 1;
	}else
	{
		printf("Invalid Option \n");
	}
	
	printf("\n");
	
	printf("Question 5 \n");
	char question5;
	printf("Which of the following Is more rich in protein: \n");
	printf("(a) rice \n (b) eggs \n (c) yam \n");
	printf("Input answer: ");
	scanf("%c", &question5);
	
	if(question5 == 'b')
	{
		correctAnswer += 1;
	}else if(question5 == 'a'|| question5 == 'c') 
	{
		wrongAnswer += 1;
	}else
	{
		printf("Invalid Option \n");
	}
	
	printf("\n#################################################### \n");
	
	printf("Your total score: %d \n", correctAnswer);
	
	printf("\n#################################################### \n");
} 

