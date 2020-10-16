# include <stdio.h>
# include <stdlib.h>
# include <string.h>

float avg(int *, int);
void copy(int *,int *,int);
int len(char *);
void print_array(int *, int);

int main(){
	int i;
	int avray[10];
	for (i=0;i<10;i++){
		avray[i]=2*i;
	}
	printf("avg of first 10 multiples of 2: %f\n", avg(avray, sizeof(avray)/4));
	
	int cpray[10];
		for (i=0;i<10;i++){
		cpray[i]=0;
	}
	printf("cpray before copy ");
	print_array(cpray,10);
	copy(avray, cpray, 10);
	printf("cpray after copy ");
	print_array(cpray,10);
	
	char st[]="abcd";
	printf("length of abcd: %d\n", len(st));
	
	char test[20];
	strcpy(test,st);
	printf("test: %s\n",test);
	strcat(test, st);
	printf("test: %s\n",test);
	printf("a in test: %d\n",strchr(test,"a"));
	test[0]="A";
	printf("%d\n",strcmp(st,test));
}

float avg(int *arr,int size){
	int i;
	int sum=0;
	for (i=0;i<size;i++){
		sum+=arr[i];
	}
	return sum/size;
}

void copy(int *arr1,int *arr2, int size){
	int i;
	for (i=0;i<size;i++){
		arr2[i]=arr1[i];
	}
}

int len(char *st){
	int i=0;
	while(*st++){
		i++;
	}
	return i;
}
void print_array(int *ray, int size){
	int i;
	for (i=0;i<size;i++){
		printf("%d ",ray[i]);
	}
	printf("\n");
}
		