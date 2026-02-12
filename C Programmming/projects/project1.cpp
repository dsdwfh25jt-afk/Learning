#include<stdio.h>
#include<conio.h>
#include<unistd.h>
int main (){
	
	char n[]={"GAURAV BHAT"};
	char p[12];
	do {
		
			for(int i=0; i<12; i++){
				printf("%c",p[i]);
				usleep(9999);

		if(n[i]==p[i]){
			i++;
		}else do{
			p[i]+=1;
		}while(n[i]>=p[i]);
	
	}
		printf("\n");
	
		
	}while (p[12]<=n[12]);
	
	
	

	
}
