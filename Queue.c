void push(int* arr,int index,int value){
	if(index==9){
		return;
	}
	arr[index+1]=value;
}
int pop(int* arr,int index){
	if(index==-1 ){
		return -1;
	}
	return arr[0];
	
}

