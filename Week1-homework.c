#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*void main()
{
  int ar[10];
  int br[] = {1,2,3,4,5};
  double dr[20];
  printf("%d\n", sizeof(double));
  printf("%d %d %d %d %d\n", sizeof(1), sizeof(2), sizeof(3), sizeof(4), sizeof(5));
  printf("%d", sizeof(dr[20]));
}*/

/*void main()
{
  int array[10];
  int a, i, j;
  int random;
  srand((unsigned)time(NULL));
  for (int i = 0; i < 10; i++) {
		random = (rand() % 9)+1;
    array[i] = random;
  }
  printf("%d", array[0]+array[1]+array[2]+array[3]+array[4]+array[5]+array[6]+array[7]+array[8]+array[9]);
}*/

/*void main() 왜 안돼징 
{
  float array[10];
  float random;
  int i, j;
  for (int i = 0; i < 10; i++) {
		random = (float)(rand()%999) / 10;
  }
  float max = array[0];
  for(j = 0; j < 10; j++) {
    if (max < array[j]) {
      max = array[j];
    }
  }
  printf("%f", max);
}*/

/*void main()
{
  int array[10] = {5,2,1,5,6,7,8,9,4,2};
  int i, min_position, min;
  min = array[0];
  	
	for(i=1; i<10; i++)
   	{
    	if(min > array[i])
     	{
       		min = array[i];
       		min_position = i;
	  	} 
   	}
  printf("min = %d\nmin_position = %d", min, min_position);
}*/

/*void main()
{
  int array[10] = {15,22,31,54,64,73,82,29,41,23};
  int i, Maximum, Max_Position;
  int hello = array[9];
  Maximum = array[0];
	for(i=1; i<10; i++)
   	{
	   	if(Maximum < array[i])
     	{
       		Maximum=array[i];
       		Max_Position = i;
     	}    
   	}
  array[9] = Maximum;
  array[Max_Position] = hello;
  printf("%d %d %d %d %d %d %d %d %d %d", array[0],array[1],array[2],array[3],array[4],array[5],array[6],array[7],array[8],array[9]);
}*/

