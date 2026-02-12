#include <stdio.h>
int main (){
	int array[11]={ 1,2,3,4,5,6,7,7,8,0,8};
	
    int max=array[0];
  	int smax=0;
  	int tmax=0;
  	
  	for(int i=0; i<11; i++){
  		if(max<array[i]) 
		  { tmax=smax;
		    smax=max;
  			max=array[i];
		  } else if (smax<array[i] && max!= array[i]) {
		  	  tmax=smax;
			  smax=array[i];
		  	
		  }else if(tmax<array[i] && smax!= array[i] && max!= array[i]){
		  	tmax=array[i];
		  }
	  }
	  
	  
	  printf(" The max value of array is : %d \n",max);
	  printf(" The second max value of array is : %d\n",smax);
	  printf(" The third max value of array is : %d\n",tmax);
}
