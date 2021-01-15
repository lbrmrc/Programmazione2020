int ricorsiva(int *a, int n, int posizione) {
	if(posizione == n) {
		return 0;
	}
	else if(a[posizione] > 0) {
		return 1 + ricorsiva(a,n,posizione+1);
	}
	else {
		return ricorsiva(a,n,posizione+1);
	}
}