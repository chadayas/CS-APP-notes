

void swap(long *xp, long *yp){
	*xp += *yp;
	*xp += *yp;
}

int main(){
	long x = 3;
	long y = 2;
	
	swap(&x, &y);
	
	int j = x;
}
