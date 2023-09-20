# include <stdio.h>

char grade (int g);

 int main (){
 	int g;
 	printf("\n Enter math : ");
	scanf("%d",&g);
	char grade1 = grade(g);
	printf("\n Xep loai hoc sinh : %c",grade1);
 }
 char grade (int g){
	if (g >= 90){
		return 'A';
	}
	else if ( g < 90 && g >= 80){
		return 'B';
	}
	 else if (g < 80 && g >= 70){
		return 'C';
	}
	else {
		return 'D';
	}
}
