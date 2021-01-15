int iterativa(int *a, int n) {
	int i;
	int count = 0;
	for(i = 0; i < n; i++) {
		if(a[i] > 0) {
			count++;
		}
	}
	return count;
}