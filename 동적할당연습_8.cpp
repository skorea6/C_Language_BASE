/*
������Լ� �迭 ������ 
*/
void Input(int *A){
	int i;
	for(i=0;i<10;i++){
		scanf("%d",A[i]);
	}
}


int main(){
	int *B = (int*)malloc(sizeof(int) * 10);
	Input(B);
	
	
}
