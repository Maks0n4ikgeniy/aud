//#include <stdio.h>
//#include <stdlib.h>
//
//
//void swap(int* a, int* b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int quicksort(int first, int last, int* imass)
//{
//	int l = first, r = last;
//	int piv = imass[(l + r) / 2];
//	while (l <= r)
//	{
//		while (imass[l] < piv)
//			l++;
//		while (imass[r] > piv)
//			r--;
//		if (l <= r) {
//			if (imass[l] > imass[r])
//				swap(&imass[l++], &imass[r--]);
//			l++;
//			r--;
//		}
//	}
//	if (first < r)
//		quicksort(first, r, imass);
//	if (last > l)
//		quicksort(l, last, imass);
//	return *imass;
//}
//
//int main() {
//	int n, size = 1;
//	scanf_s("%d", &n);
//	int* imass = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; ++i) {
//		printf("imass[%d] = ", i);
//		scanf_s("%d", &imass[i]);
//	}
//	if (imass != 0) {
//		quicksort(0, n-1, imass);
//	}
//	for (int i = 0; i < n - 1; ++i)
//		if (imass[i] != imass[i + 1])
//			++size;
//	int* newimass = (int*)malloc(size * sizeof(int));
//	int j = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		if (imass[i] != imass[i + 1])
//			newimass[j++] = imass[i];
//	}
//	printf("NEW MASS: ");
//	for (int j = 0; j < size; ++j)
//		printf("%d ", newimass[j]);
//	printf("\n SIZE MASS = %d", size);
//	return 0;
//}