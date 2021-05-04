/*
	
*/

int sum(int x){
	if(x==n){
		return x;
	}else{
		return x+sum(x+1);
	}
}
