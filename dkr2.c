#include <stdio.h>
#include <float.h>

void find_min(double array[], int size, double *min_value, int *min_index) {
*min_value = DBL_MAX;
*min_index = -1;

for (int i = 0; i < size; i++) {
double value = array[i];
if (value < *min_value) {
*min_value = value;
*min_index = i;
}
}
}

int main() {
int size;
printf("Enter the size of the array: ");
scanf("%d", &size);

double array[size];
for (int i = 0; i < size; i++) {
printf("Enter element %d: ", i+1);
scanf("%lf", &array[i]);
}

double min_value;
int min_index;

find_min(array, size, &min_value, &min_index);

printf("Minimum value: %f, index: %d\n", min_value, min_index);
return 0;
}
