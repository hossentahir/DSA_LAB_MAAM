#include<stdio.h>
// int main(){
	int iterativeBinarySearch(int array[], int start_index, int end_index, int element){ 

		while(start_index <= end_index){
			int middle= start_index+(end_index)/2;
			if(array[middle]==element)
				return middle;
			if(array[middle]<element)
				start_index=middle+1;
			else
				end_index= middle-1;
		}
		return -1;
		
	}
	int main(){
		int array[]={1,4,7,9,16,55,67};
		int n=7;
		int element=16;
		int found_index=iterativeBinarySearch(array,0,n-1,element);
		if(found_index==-1){
			printf("element is not found in the array");
		}
		else{
			printf("element is at found in the index : %d",found_index);
		}
		return 0;
	}
	
	
	
	
	
// 	return 0;
// }

