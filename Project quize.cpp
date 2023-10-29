#include<stdio.h>
int main()
{
	int i;
	int ans1,ans2,ans3,ans4,ans5;
	int point1,point2,point3,point4,point5;
	int point01,point02,point03,point04,point05;
	int Total;
	
	printf("Wellcome to the QUIZE game\n\n");
	
	printf("press 7> to start the game\n");
	printf("press 0> to quite the game\n");
	scanf("%d",&i);
	
	if(i==7){
		printf("THE GAME HAS START\n\n");
	}
	else if(i==0){
		printf("THE GAME HAS END\n");
	}
	else {
		printf("INVALID!");
	}
	
	if(i==7){
		printf("A) Who is Indian prime minister:\n");
		printf("1)Mamta banerji\n");
		printf("2)Narendra Modi\n");
		printf("3)Avishek Manna\n");	
		printf("4)Jogi Adityanath\n");
		
		scanf("%d",&ans1);
		 if(ans1==2){
		 	printf("Correct answer\n");
		 		point1=5;
		 		printf("You have scroed: %d\n\n", point1);
		 }	
			
		 else{
		 	printf("Wrong answer\n");
		 	point01=0;
		 	printf("You have scroed: %d\n\n", point01);
		 }
		 
		printf("B) What is the national flower of India ?\n");
		printf("1)Rose\n");
		printf("2)Sunflower\n");
		printf("3)Lotus\n");
		printf("4)Tulsi\n");
		
		scanf("%d",&ans2);
		 if(ans2==3){
		 	printf("Corruct Answer\n");
		 	point2=5;
		 	printf("You have scroed: %d\n\n",point2);
		 }
		 else{
		 	printf("Wrong answer");
		 	point02=0;
		 	printf("You have scroed:%d\n\n",point02);
		 }
		 
		printf("C) How many colours have in Indian national flag?\n");
		printf("1)three\n");
		printf("2)four\n");
		printf("3)one\n");
		printf("4)five\n");
		
		scanf("%d",&ans3);
		 if(ans3==1){
		 	printf("currect answer\n");
		 	point3=5;
		 	printf("You have scroed:%d\n\n",point3);
		 }
		 else{
		 	printf("Wrong ans\n");
		 	point03=0;
		 	printf("You have scroed:%d\n\n",point03);
		 } 
		 
		printf("D) What is Indian national animal ?\n");
		printf("1)Eliphant\n");
		printf("2)Rabbit\n");
		printf("3)Lion\n");
		printf("4)Tiger\n"); 
		scanf("%d",&ans4);
		 if(ans4==4){
		 	printf("Correct answer\n");
		 	point4=5;
		 	printf("You have scroed:%d\n\n",point4);
		 }
		 else{
		 	printf("wrong answer\n");
		 	point04=0;
		 	printf("You have scroed:%d\n\n",point04);
		 }
		
		printf("E) What is Indian national frouit?\n"); 
		printf("1)Litchi\n");
		printf("2)Mango\n");
		printf("3)Guava\n");
		printf("4)Apple\n");
		scanf("%d",&ans5);
		 if(ans5==2){
		 	printf("Correct answer\n");
		 	point5=5;
		 	printf("You have scroed:%d\n\n",point5);
		 }
		 else{
		 	printf("wrong answer\n");
		 	point05=0;
		 	printf("You have scroed:%d\n\n",point05);
		 }		
			
	}
	else{
		printf("Game hase end");
	}
	
	Total=point1+point2+point3+point4+point5;
	printf("Your fainal score  is:%d",Total);
	
return 0;	
	
}
